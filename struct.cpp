#include<iostream>
#include<algorithm>
using namespace std;

// const int MAX = 10000;

// struct employee{

//     string name;
//     int age;
//     double salary;
//     char gender;

// };

// employee employees_arr[MAX];

// int added = 0;

// int main(){

//     employee first = {"Bhavesh", 21, 100.21, 'M'};

//     employees_arr[added] = first;
//     added++;

//     cout << first.name << "\n";

//     employees_arr[added].name = "Sia";
//     employees_arr[added].age  = 21;
//     employees_arr[added].salary = 200.21;
//     employees_arr[added].gender = 'F';

//     added++;

//     for(int i = 0; i < added; i++){
//         cout << employees_arr[i].name << " ";
//         cout << employees_arr[i].age  << " ";
//         cout << employees_arr[i].salary << " ";
//         cout << employees_arr[i].gender << " ";
//         cout << "\n";
//     }

//     cout << added;

//     return 0;

// }



// Reading and Writing

// struct employee{

//     string name;
//     int age;
//     double salary;
//     char gender;

// };

// const int MAX = 10000;

// employee employees_arr[MAX];

// int added = 0;

// void read_employee(){
//     cout << "Enter following details: \n";
//     cout << "Name: ";
//     cin  >> employees_arr[added].name;
//     cout << "Age: ";
//     cin  >> employees_arr[added].age;
//     cout << "Salary: ";
//     cin  >> employees_arr[added].salary;
//     cout << "Gender: ";
//     cin  >> employees_arr[added].gender;

//     cout << "\n";

//     added++;
// }

// void print_employees(){

//     for(int i = 0; i < added; i++){
//         employee e = employees_arr[i];
//         cout << e.name << " has salary " << e.salary;

//         cout << "\n";
//     }

// }

// int main(){

//     for(int i = 0; i < 5; i++){
//         read_employee();
//         cout << "****************************\n";
//         cout << "\n";
//     }

//     print_employees();

//     return 0;

// }



// Reading and Writing -- Another Way

// const int MAX = 1000;

// struct employee{

//     string name;
//     int age;
//     double salary;
//     char gender;

// };

// employee employees_arr[MAX];

// int added = 0;

// void read_employees(employee &e){
//     cout << "Enter name, age, salary and gender: \n";
//     cin  >> e.name >> e.age >> e.salary >> e.gender;
// }

// void print_employee(employee &e){
//     cout << e.name << " " << e.gender << " " << e.age << " " << e.salary << "\n"; 
// }

// void print_employees() {

//     for(int i = 0; i < added; i++){
//         print_employee(employees_arr[i]);
//     }

// }

// int main(){

//     read_employees(employees_arr[added++]);
//     read_employees(employees_arr[added++]);

//     print_employees();

//     return 0;
// }



// Functions inside the struct

// const int MAX = 1000;

// struct employee{

//     string name;
//     int age;
//     double salary;
//     char gender;

//     void read_employee(){
//         cout << "Enter your name, age, salary and gender: ";
//         cin  >> name >> age >> salary >> gender;
//     }

//     void print_employee(){
//         cout << name << " has salary " << salary << " and age " << age << ".\n";
//     }

//     int get_age(){
//         return age;
//     }

//     void set_age(int new_age){
//         age = new_age;
//     }

// };


// employee employees_arr[MAX];

// int added = 0;

// void print_employees(){

//     for(int i = 0; i < added; i++){
//         employees_arr[i].print_employee();
//     }

// }


// int main(){

//     employees_arr[added++].read_employee();
//     employees_arr[added++].read_employee();

//     print_employees();

//     cout << employees_arr[0].get_age() << "\n";

//     employees_arr[0].set_age(10000);

//     cout << employees_arr[0].get_age() << "\n";

//     print_employees();

//     return 0;

// }



// Compare Functions

// const int MAX = 1000;

// struct employee{

//     string name;
//     int age;
//     double salary;
//     char gender;

//     void read_employee(){
//         cout << "Enter your name, age, salary and gender: ";
//         cin  >> name >> age >> salary >> gender;
//     }

// };

// employee employees_arr[MAX];

// int added = 0;

// bool compare_by_name(employee &a, employee &b){

//     return a.name < b.name;

// }

// bool compare_by_salary(employee &a, employee &b){

//     return a.salary < b.salary;

// }

// bool compare_both(employee &a, employee &b){

//     if(a.name != b.name){
//         return a.name < b.name;
//     }

//     return a.salary < b.salary;

// }

// int main(){
    
//     employees_arr[added++].read_employee();
//     employees_arr[added++].read_employee();

//     cout << compare_by_name(employees_arr[0], employees_arr[1]) << "\n";    

//     cout << compare_by_salary(employees_arr[0], employees_arr[1]) << "\n";

//     cout << compare_both(employees_arr[0], employees_arr[1]) << "\n";

//     return 0;
// }




// Ordering array

const int MAX = 10000;

struct employee{
    string name;
    int age;
    double salary;
    char gender;

    void read_employee(){
        cout << "Enter your name, age, salary and gender: ";
        cin  >> name >> age >> salary >> gender;
    }

    void print_employee(){
        cout << name << " has salary " << salary << "\n";
    }
};

employee employees_arr[MAX];

int added = 0;

void print_employees(){
    for(int i = 0; i < added; i++){
        employees_arr[i].print_employee();
    }
}

bool compare_name(employee &a, employee &b){
    return a.name < b.name;
}

bool compare_salary(employee &a, employee &b){
    return a.salary > b.salary;
}

bool compare_name_salary(employee &a, employee &b){
    if(a.name != b.name){
       return a.name < b.name;
    }

    return a.salary < b.salary;
}

int main(){

    int arr[5] {5,3,4,1,2};

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";

    sort(arr, arr+5); // #include<algorithm>

    for(int i = 0; i < 5; i++){
        cout << arr[i] << " ";
    }

    cout << "\n";

    employees_arr[added++].read_employee();
    employees_arr[added++].read_employee();
    employees_arr[added++].read_employee();

    sort(employees_arr, employees_arr + added, compare_name);

    cout << "*********************\n";

    print_employees();

    cout << "\n";

    cout << "**************************\n";

    sort(employees_arr, employees_arr + added, compare_salary);
    print_employees();

    cout << "\n";

    cout << "**************************\n";

    sort(employees_arr, employees_arr + added, compare_name_salary);
    print_employees();

    cout << "\n";

    return 0;

}

// Structure inside structure

// struct full_name{

//     string first, middle, last;

//     void read_name(){
//         cout << "Enter your full name: ";
//         cin  >> first >> middle >> last;
//     }

// };

// struct employee{

//     full_name emp_name;
//     int age;
//     double salary;

//     void read(){

//         emp_name.read_name();

//         cout << "Enter your age and salary: ";
//         cin  >> age >> salary;
//     }

//     void print_employees(){
//         cout << emp_name.first << " has salary " << salary << "\n";
//     }


// };

// int main(){

//     employee emp;

//     emp.read();

//     emp.print_employees();

// }



// Constructor

// struct full_name{

//     string first, middle, last;

//     full_name(string _first){
//         first = _first;
//         middle = last = "......";
//     }

//     full_name(string _first, string _last){
//         first = _first;
//         middle = "";
//         last  = _last;
//     }

// };

// int main(){

//     full_name my_name = full_name("ali");
//     cout << my_name.first << my_name.middle << my_name.last << "\n";

//     full_name new_name = full_name("Bhavesh", "Yadav");
//     cout << new_name.first << " " << new_name.middle << " " << new_name.last;

// }