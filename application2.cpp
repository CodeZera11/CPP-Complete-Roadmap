#include<iostream>
using namespace std;

const int max = 100000;

string name[max];
int age[max];
double salary[max];
char gender[max];
int added = 0;


int menu(){
    int choice = -1;
    
    while(choice == -1){

        cout << "Enter your choice: \n";
        cout << "1. Add new employee. \n"
        cout << "2. Print all employees. \n";
        cout << "3. Delete by age. \n";
        cout << "4. Update Salary by name. \n";

        cin >> choice;

        if(!(choice >= 1 || choice <= 4)){
            cout << "Invalid Choice!!!!!";
            choice = -1;
        }

    }

    return choice;
    
}

void employee_system(){
 
    while(true){
        int choice = menu();

        if(choice == 1){
            read_employee();
        }else if(choice == 2){
            print_employee();
        }else if(choice == 3){
            delete_by_age();
        }else if(choice == 4){
            update_salary();
        }else{
            break;
        }
    }
}

void read_employee(){
    cout << "Enter name: ";
    cin  >> name[added];

    cout << "Enter age: ";
    cin  >> age[added];

    cout << "Enter salary: ";
    cin  >> salary[added];

    cout << "Enter gender: ";
    cin  >> gender[added];

    added++;
}

void print_employee(){
    cout << "************************************\n";

    for(int i = 0; i < added; i++){
        if(age[i] != -1){
            cout << name[i] << "\n";
            cout << age[i] << "\n";
            cout << salary[i] << "\n";
            cout << gender[i] << "\n";
        }
    }
}

void delete_by_age(){
    int start, end;
    cin  >> start >> end;

    for(int i = 0; i < added; i++){
        if(start <= age[i] && age[i] <= end){
            age[i] = -1;
        }
    }
}

void update_salary(){
    string new_name;
    int new_salary;

    cin >> new_name;
    cin >> new_salary;

    for(int i = 0; i < added; i++){
        if(age[i] != -1){
            if(name[i] == new_name){
                salary[i] = new_salary;
            }
        }
    }

}

int main(){
    employee_system();
    return 0;
}