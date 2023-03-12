#include<iostream>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

// int main(){

//     int age = 55;

//     cout << age << " " << &age << "\n";

//     int &ref1 = age;

//     cout << ref1 << " " << &ref1 << "\n";

//     int &ref2 = ref1;

//     cout << ref2 << " " << &ref2 << "\n";

//     ref2 = 10;

//     cout << age << " " << ref1 << " " << ref2 << "\n";

//     return 0;
// }



// Return by value

// int get_number(){

//     int x = 20;

//     cout << &x << "\n";
//     // 0x61fedc

//     return x;
// }

// int main(){

//     int y = get_number();

//     cout << &y << "\n";
//     // 0x61ff0c

//     // y has different address than x
//     // because x will be destroyed after end of function get_number

//     return 0;
// }




// Pass by reference

// void read(string name, int &x, string &str){

//     cout << "Hello " << name << "\n";

//     cin >> x >> str;

//     name = "************";

// }

// int main(){

//     string my_name = "mostafa";
//     int x;
//     string msg;

//     read(my_name, x , msg);

//     cout << my_name << " " << x << " " << msg << "\n";

//     return 0;
// }




// Return by reference

// struct specialname{

//     string name = "mostafa";

//     string &get_name(){
//         return name;
//     }

//     void print(){
//         cout << name << "\n";
//     }

// };

// // Never do so. Temp will be destroyed
// string &get_msg(){

//     // Warning: reference to local variable
//     string temp = "hello";
//     return temp;

// }

// int main(){

//     specialname my_name;
   
//     my_name.print();

//     string &str = my_name.get_name();

//     str = "ziad";

//     my_name.print();

//     return 0;
// }



// Iterate using refernce

// int main(){

//     vector<int> vec {1, 2, 3, 4};

//     for(auto &val : vec){
//         cout << val << " ";
//         val = 1;
//     }

//     cout << "\n";

//     for(auto &val2 : vec){
//         cout << val2 << " ";
//     }

//     cout << "\n";


//     vector<int> vec2 {1,2,3,4};

//     for(auto val : vec2){
//         cout << val << " ";
//         val = 2;
//     }

//     cout << "\n";

//     for(auto val2 : vec2){
//         cout << val2 << " ";
//     }

//     return 0;
// }




// Commom Mistake with mapping

struct employee{};

int main(){

    map<int, employee> mp;

    employee e1;
    mp[0] = e1;

    employee &e2 = mp[0];
    employee e3 = mp[0];    

    cout << &e1 << "\n";
    cout << &e2 << "\n";
    cout << &e3 << "\n";

    return 0;
}