#include<iostream>
using namespace std;

// Our Own Queue

// struct queue{
//     int arr[100];
//     int size;

//     queue(){
//         size = 0;
//     }

//     void add_end(int value){
//         arr[size++] = value;
//     }

//     void add_front(int value){
//         // Right Shift
//         for(int i = size-1; i >= 0; i--){
//             arr[i+1] = arr[i];
//         }
//         arr[0] = value;
//         size++;
//     }

//     int remove_front(){
//         int temp = arr[0];

//         // Shift left
//         for(int i = 1; i < size; i++){
//             arr[i-1] = arr[i];
//         }
//         size--;

//         return temp;
//     }

//     void print(){
//         for(int i = 0; i < size; i++){
//             cout << arr[i] << " ";
//         }
//         cout << "\n";
//     }



// };


// int main(){

//     queue my_queue;

//     my_queue.add_end(10);
//     my_queue.add_end(20);
//     my_queue.add_end(30);
//     my_queue.add_end(40);
//     my_queue.add_end(50);

//     my_queue.print();

//     my_queue.add_front(5);

//     my_queue.print();

//     my_queue.remove_front();

//     my_queue.print();

//     return 0;
// }



// Re-writing Hospital System

// Global variables
const int MAX_SPECIALISATION = 20;
const int MAX_QUEUE = 5;

struct hospital_queue{

    string names[MAX_QUEUE];
    int status[MAX_QUEUE];

    int len, spec;

    hospital_queue(){
        len = 0;
        spec = -1;
    }

    hospital_queue(int _spec){
        len = 0;
        spec = _spec;
    }

    bool add_end(string name, int st){
        if(len == MAX_QUEUE){
            return false;
        }

        names[len] = name;
        status[len] = st;

        len++;

        return true;
    }

    bool add_front(string name, int st){
        if(len == MAX_QUEUE){
            return false;
        }

        // Shift Right
        for(int i = len-1; i >= 0; i--){
            names[i+1] = names[i];
            status[i+1] = status[i];
        }

        names[0] = name;
        status[0] = st;

        len++;

        return true;
    }

    void remove_front(){

        if(len == 0){
            cout << "No patients at the moment, Have rest Dr.\n";
            return;
        }

        cout << names[0] << " please go with Dr.\n";

        // Shift Left
        for(int i = 1; i < len; i++){
            names[i-1] = names[i];
            status[i-1] = status[i];
        }

        len--;

    }

    void print(){

        if(len == 0){
            return;
        }

        cout << "There are " << len << " patients in specialisation " << spec << ".\n";

        for(int i = 0; i < len; i++){
            cout << names[i] << " ";
            if(status[i]){
                cout << "urgent\n";
            }else{
                cout << "regular\n";
            }
        }
        cout << "\n";
    }

};

struct hospital_system{

    hospital_queue queues[MAX_SPECIALISATION+1];

    hospital_system(){
        for(int i = 0; i < MAX_SPECIALISATION; i++){
            queues[i] = hospital_queue(i);
        }
    }

    void run(){
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

    int menu(){

        int choice = -1;

        while(choice == -1){
            cout << "Choose an option: \n";
            cout << "1. Add new patient\n";
            cout << "2. Print all patients\n";
            cout << "3. Get next patient\n";
            cout << "4. Exit\n";

            cin  >> choice;

            if(!(choice >= 1 && choice <= 4)){
                cout << "Invalid choice! Try again\n";
                choice == -1;
            }
        }

        return choice;
    }

    bool add_patient(){

        string name;
        int spec, st;

        cout << "Enter your specialisation, name and status: ";
        cin  >> spec >> name >> st;

        bool status;
        if(st == 0){
            status = queues[spec].add_end(name, st);
        }else{
            status = queues[spec].add_front(name, st);
        }

        if(status == false){
            cout << "Sorry! Queue is full\n";
            return false;
        }
        
        return true;

    }

    void print_patients(){
        for(int spec = 0; spec < MAX_SPECIALISATION; spec++){
            queues[spec].print();
        }
    }

    void get_next_patient(){
        int spec;

        cout << "Enter your specialisation: ";
        cin  >> spec;

        queues[spec].remove_front();
    }

};

int main(){

    hospital_system hospital = hospital_system();
    
    hospital.run();

    return 0;
}