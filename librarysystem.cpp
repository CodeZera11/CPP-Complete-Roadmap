#include<iostream>
#include<algorithm>
#include<cassert>
using namespace std;

const int MAX_BOOKS = 10;
const int MAX_USERS = 10;

struct book{

    int id;
    string name;
    int total_quantity;
    int total_borrowed;

    book(){
        total_quantity = total_borrowed = 0;
        id = -1;
        name = "";
    }

    void read(){
        cout << "Enter book info: id, name and total_quantity: ";
        cin  >> id >> name >> total_quantity;
        total_borrowed = 0;
    }

    bool borrow(int user_id){
        if(total_quantity - total_borrowed == 0){
            return false;
        }

        total_borrowed++;
        return true;
    }

    void return_copy(){
        assert(total_borrowed > 0);
        total_borrowed--;
    }

    bool has_prefix(string prefix){
        if(name.size() < prefix.size()){
            return false;
        }

        for(int i = 0; i < prefix.size(); i++){
            if(prefix[i] != name[i]){
                return false;
            }
        }

        return true;
    }

    void print(){
        cout << "id = " << id << " name = " << name << " total_quantity "
				<< total_quantity << " total_borrowed " << total_borrowed
				<< "\n";
    }

};

struct user{

    int id;
    string name;
    int borrowed_books_ids[MAX_BOOKS];
    int len;

    user(){
        len = 0;
        name = "";
        id = -1;
    }

    void read(){
        cout << "Enter your user name and id: ";
        cin  >> name >> id;
    }

    void borrow(int book_id){
        borrowed_books_ids[len++] = book_id; 
    }

    void return_copy(int book_id){
        bool removed = false;

        for(int i = 0; i < len; i++){
            if(borrowed_books_ids[i] == book_id){
                // Shift left
                for(int j = i+1; j < len; j++){
                    borrowed_books_ids[j-1] = borrowed_books_ids[j];
                }
                removed = true;
                len--;
                break;
            }
        }

        if(!removed){
            cout << "User " << name << "never borrowed book id " << book_id << "\n";
        }
    }

    bool is_borrowed(int book_id){
        for(int i = 0; i < len; i++){
            if(book_id == borrowed_books_ids[i]){
                return true;
            }
        }

        return false;
    }

    void print(){

        sort(borrowed_books_ids, borrowed_books_ids + len);

        cout << "user " << name << " " << "id " << id << " borrowed books ids: ";

        for(int i = 0; i < len; i++){
            cout << borrowed_books_ids[i] << " ";
        }
        cout << "\n";
    }


};

bool compare_by_id(book &a, book &b){
    return a.id < b.id;
}

bool compare_by_name(book &a, book &b){
    return a.name < b.name;
}

struct library_system{

    int total_books;
    book books[MAX_BOOKS];
    int total_users;
    user users[MAX_USERS];

    library_system(){
        total_books = total_users = 0;
    }


    void run(){
        while(true){
            int choice = menu();

            if (choice == 1)
				add_book();
			else if (choice == 2)
				search_books_by_prefix();
			else if (choice == 3)
				print_who_borrowed_book_by_name();
			else if (choice == 4)
				print_library_by_id();
			else if (choice == 5)
				print_library_by_name();
			else if (choice == 6)
				add_user();
			else if (choice == 7)
				user_borrow_book();
			else if (choice == 8)
				user_return_book();
			else if (choice == 9)
				print_users();
			else
				break;

        }
    }


    int menu(){

        int choice = -1;

        while(choice == -1){
            cout << "\n Enter your menu choice [1-10]: ";
            cin  >> choice;

            if(!(choice >= 1 && choice <= 10)){
                cout << "Invalid choice! Try again";
                choice = -1;
            }
        }
        return choice;
    }

    void add_book(){
        books[total_books++].read();
    }

    void search_books_by_prefix(){

        string prefix;
        cout << "Enter prefix: ";
        cin  >> prefix;

        int count = 0;

        for(int i = 0; i < total_books; i++){

            if(books[i].has_prefix(prefix)){
                count++;
                cout << books[i].name << "\n";
            }

        }

        if(!count){
            cout << "No books with such prefix!\n";
        }

    }

    int book_idx_by_name(string book_name){

        for(int i = 0; i < total_books; i++){
            if(book_name == books[i].name){
                return i;
            }
        }
        
        return -1;

    }

    void print_who_borrowed_book_by_name(){

        string book_name;
        cout << "Enter book name: ";
        cin  >> book_name;

        int book_idx = book_idx_by_name(book_name);

        if(book_idx == -1){
            cout << "Invalid book name\n";
            return;
        }

        int book_id = books[book_idx].id;

        if(books[book_idx].total_borrowed == 0){
            cout << "No borrowed copies\n";
        }

        for(int i = 0; i < total_users; i++){
            if(users[i].is_borrowed(book_id)){
                cout << users[i].name << "\n";
            }
        }

    }

    void print_library_by_id(){

        sort(books, books + total_books, compare_by_id);

        cout << "\n";
        for(int i = 0; i < total_books; i++){
            books[i].print();
        }
    }

    void print_library_by_name(){

        sort(books, books + total_books, compare_by_name);

        cout << "\n";
        for(int i = 0; i < total_books; i++){
            books[i].print();
        }

    }

    void add_user(){
        users[total_users++].read();
    }

    int user_idx_by_name(string user_name){

        for(int i = 0; i < total_users; i++){
            if(user_name == users[i].name){
                return i;
            }
        }

        return -1;

    }

    bool read_user_name_and_book_name(int &user_idx,int &book_idx, int trials = 3){

        string user_name;
        string book_name;

        while(trials--){

            cout << "Enter user_name and book_name: ";
            cin  >> user_name >> book_name;

            user_idx = user_idx_by_name(user_name);   
 
            if(user_idx == -1){
                cout << "Invalid user_name, Try again!!!!\n";
                continue;
            }

            book_idx = book_idx_by_name(book_name);

            if(book_idx == -1){
                cout << "Invalid book_name, Try again!!!!\n";
                continue;
            }
            return true;
        }

            cout << "You did several trials! Try later.";
            return false;
    }

    void user_borrow_book(){

        int user_idx, book_idx;

        if(!read_user_name_and_book_name(user_idx, book_idx)){
            return;
        }

        int user_id = users[user_idx].id;
        int book_id = books[book_idx].id;

        if(!books[book_idx].borrow(user_id)){
            cout << "No more copies available right now.\n";
        }else{
            users[user_idx].borrow(book_id);
        }

    }

    void user_return_book(){

        int user_idx, book_idx;

        if(!read_user_name_and_book_name(user_idx, book_idx)){
            return;
        }

        int book_id = books[book_idx].id;

        books[book_idx].return_copy();
        users[user_idx].return_copy(book_id);

    }

    void print_users(){

        for(int i = 0; i < total_users; i++){
            users[i].print();
        }

    }

};

int main(){

    cout << "\nLibrary Menu;\n";
	cout << "1) add_book\n";
	cout << "2) search_books_by_prefix\n";
	cout << "3) print_who_borrowed_book_by_name\n";
	cout << "4) print_library_by_id\n";
	cout << "5) print_library_by_name\n";
	cout << "6) add_user\n";
	cout << "7) user_borrow_book\n";
	cout << "8) user_return_book\n";
	cout << "9) print_users\n";
	cout << "10) Exit\n";

    library_system library;

    library.run();


}