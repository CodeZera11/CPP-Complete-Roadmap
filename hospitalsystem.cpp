#include<iostream>
using namespace std;

// Global Variables
const int max_specialisation = 20;
const int max_queue = 5;

// Arrays
string names[max_specialisation][max_queue];
int status[max_specialisation][max_queue];
int queue_length[max_specialisation];

int menu(){

    int choice = -1;

    while(choice == -1){
        cout << "Enter your choice: \n";
        cout << "1. Add new patient\n";
        cout << "2. Print all patients\n";
        cout << "3. Get next patient\n";
        cout << "4. Exit\n";

        cin >> choice;

        if(!(choice >= 1 && choice <= 4)){
            cout << "Invalid choice. Try Again!";
            choice = -1;
        }
    }

    return choice;
}

void right_shift(int spec, string names_new[], int status_new[]){

    int len = queue_length[spec];

    for(int i = len-1; i >= 0; i--){
        names_new[i+1] = names_new[i];
        status_new[i+1] = status_new[i];
    }

    queue_length[spec]++;

}

void add_patient(){

    int spec, st;
    string name;

    cout << "Enter specialisation, name, status: ";
    cin  >> spec >> name >> st;

    int pos = queue_length[spec];

    if(pos >= max_queue){
        cout << "Sorry! Queue is full. Come back later\n";
        return;
    }

    if(st == 0){
        names[spec][pos] = name;
        status[spec][pos] = st;
        queue_length[spec]++;
    }else{

        right_shift(spec, names[spec], status[spec]);

        names[spec][0] = name;
        status[spec][0] = st;
    }

    cout << "\n";

}

void print_patient(int spec, string names_new[], int status_new[]){

    int len = queue_length[spec];

    if(len == 0){
        return;
    }

    cout << "There are " << len << " patients in specialisation " << spec << "\n";

    for(int i = 0; i < len; i++){
        cout << names_new[i] << " ";

        if(status_new[i]){
            cout << "Urgent \n";
        }else{
            cout << "Regular \n";
        }
    }

    cout << "\n";

}

void print_patients(){

    for(int spec = 0; spec < max_specialisation; spec++){
        print_patient(spec, names[spec], status[spec]);
    }

}

void shift_left(int spec, string names_new[], int status_new[]){

    int len = queue_length[spec];

    for(int i = 1; i < len; i++){
        names_new[i-1] = names_new[i];
        status_new[i-1] = status_new[i]; 
    }

    queue_length[spec]--;

}

void get_next_patient(){
    int spec;

    cout << "Enter specialisation: ";
    cin  >> spec;

    int len = queue_length[spec];

    if(len == 0){
        cout << "No patients at the moment. Have rest, DR.\n";
    }

    cout << names[spec][0] << " please go with the DR.\n";

    shift_left(spec, names[spec], status[spec]);

}

void hospital_system(){

    while(true){
        int choice = menu();

        if(choice == 1){
            add_patient();
        }else if(choice == 2){
            print_patients();
        }else if(choice == 3){
            get_next_patient();
        }else{
            break;
        }
    }

}

int main(){

    hospital_system();

    return 0;
}