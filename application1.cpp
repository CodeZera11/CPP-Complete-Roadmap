#include<iostream>
using namespace std;


// int main(){

//     int n;

//     string name[10000];

//     int age[10000] = {0};

//     int salary[10000];

//     char gender[10000];

//     int start_age, end_age;

//     int added = 0;

//     while(true){

//         cout << "Enter your choice: \n";
//         cout << "1) Add new employee \n2) Print all employees \n3) Delete by age \n4) Update Salary by name\n";

//         cin >> n;

//         if(!(n >=1 && n <= 4)){
//         cout << "Invalid option!!!!!!";
//         continue; 
//         }

//         if(n == 1){
//             cout << "Enter name: ";
//             cin  >> name[added];

//             cout << "Enter age: ";
//             cin  >> age[added];

//             cout << "Enter salary: ";
//             cin  >> salary[added];

//             cout << "Enter gender(M/F): ";
//             cin  >> gender[added];

//             cout << "\n";

//             added++;
//         }else if(n == 2){

//             cout << "\n" << "The details of employees are: \n";

//             for(int j = 0; j < added; j++){
//                 if(age[j]){
//                 cout << name[j] << " " << age[j] << " " << salary[j] << " " << gender[j] << "\n"; 
//                 }
//             }

//             cout << "\n";
//         }else if(n == 3){
//             cout << "Enter start and end age: \n";
//             cin  >> start_age >> end_age;

//             for(int j = 0; j < added; j++){

//                 if(age[j]){
//                     if(age[j] >= start_age && age[j] <= end_age){
//                         age[j] = 0;
//                         name[j] = "NA";
//                         salary[j] = 0;
//                         gender[j] = 'E';
//                     }
//                 }
//             }
//         }else if(n == 4){
//             string new_name;
//             cin >> new_name;

//             int new_salary;
//             cin >> new_salary;

//             for(int j = 0; j < added; j++){
//                 if(age[j]){
//                     if(new_name == name[j]){
//                         salary[j] = new_salary; 
//                     }
//                 }
//             }
//         }


//     }

// }



// Using functions  

const int max = 10000;

string name[max];
int age[max];
double salary[max];
char gender[max];

int added = 0;


int menu() {
    
    int choice = 0;
    while(true){
        cout << "Enter your choice: \n";
        cout << "1) Add new employee \n2) Print all employees \n3) Delete by age \n4) Update Salary by name\n";

        cin >> choice;

        if(choice < 1 || choice > 4){
            cout << "Invalid Option";
            choice = -1;
        }
    }

    return choice;
}

void add_employee(){

    cout << "Enter name: ";
    cin  >> name[added];

    cout << "Enter age: ";
    cin  >> age[added];

    cout << "Enter salary: ";
    cin  >> salary[added];

    cout << "Enter gender(M/F): ";
    cin  >> gender[added];

    cout << "\n";

    added++;

}

void print_employees(){
    for(int i = 0; i < added; i++){
        cout << "\n" << "The details of employees are: \n";
        if(age[i]){
            cout << name[i] << " " << age[i] << " " << salary[i] << " " << gender[i];
        }
    }
}

void delete_by_age(){

    int start_age, end_age;

    cin >> start_age >> end_age;

    for(int i = 0; i < added; i++){
        if(age[i]){
            if(age[i] >= start_age && age[i] <= end_age){
                age[i] = 0;
            }
        }
    }

}


void update_salary(){

    int new_name;
    cin >> new_name;

    int new_salary;
    cin >> new_salary;

    for(int i = 0; i < added; i++){
        if(age[i]){
            if(name[i] == new_name){
                salary[i] = new_salary;
                break;
            }
        }
    }

}

void employee_system(){

    while(true){
        int choice = menu();

        if(choice == 1){
            add_employee();
        }else if(choice == 2){
            print_employees();
        }else if(choice == 3){
            delete_by_age();
        }else if(choice == 4){
            update_salary();
        }else{
            break;
        }

    }

}

int main() {
    employee_system();

    return 0;
}
