#include<iostream>
#include<vector>
using namespace std;

// int main(){

//     int val = 15;
//     int &ref = val;

//     cout << val << " " << &val << "\n";
//     cout << ref << " " << &ref << "\n";


//     int *ptr = &val;

//     cout << *ptr << " " << ptr << " " << &ptr << "\n";


//     *ptr = 20;

//     cout << val << " " << ref << " " << *ptr << "\n";


//     int another = 30;

//     cout << another << " " << &another << "\n";

    
//     ptr = &another;

//     cout << *ptr << " " << &ptr << " " << ptr << "\n";


//     *ptr = 50;

//     cout << val << " " << another << " " << *ptr << "\n";


//     ptr = nullptr; // Points to nothing

//     // To check this
//     if(!ptr){
//         cout << "NULL\n";
//     } 
//     // Null




//     // Pointer Initialization
//     double x = 10;
//     double *ptr2 = &x;


//     // To make it null any of the following methods can be used
//     double *ptr2 = nullptr;
//     double *ptr2 = 0;


//     // Dont do this it is garbage - DON'T!!!!!!!!!!!!!!!!!!!!!!!!!!!!
//     double *ptr4; 



//     return 0;
// }







// Playing With Pointers

// int main(){

//     int val1 = 10;
//     int val2 = 20;

//     int *p1 = &val1;
//     int *p2 = &val2;

//     cout << p1 << " " << p2 << "\n";

//     cout << *p1 << "\n";

//     p1 = p2;

//     cout << *p1 << p1 << "\n";

//     *p1 = 50;

//     cout << val1 << " " << val2 << " " << *p1 << " " << *p2 << "\n";

//     p1 = &val1;

//     swap(p1,p2); //This swaps the addresses of p1 and p2

//     cout << *p1 << " " << p1 << " " << *p2 << " " << p2 << "\n";


//     return 0;
// }






// Pointer to array

// int main(){

//     int arr[] {1,2,3,4};

//     cout << arr << "\n"; //It gives you address of arr[0].

//     int &val = arr[0];

//     cout << val << " " << &val << "\n";
//     cout << &arr[0] << "\n";

//     int *p1 = arr;

//     cout << *p1 << " " << p1 << " " << &p1 << "\n";

//     p1[0] = 10, p1[1] = 20;

//     for(auto val : arr){
//         cout << val << " ";
//     }

//     cout << "\n";

//     return 0;
// }






// Offset Notation

// int main(){

//     // arr[index] = subscript notation
//     // *(ptr + 2) = offset notation

//     int arr[] {10,21,32,43,55};

//     int *ptr = arr;

//     cout << ptr + 0 << " " << &arr[0] << "\n";
//     cout << ptr + 1 << " " << &arr[1] << "\n";
//     cout << ptr + 2 << " " << &arr[2] << "\n";
//     cout << ptr + 3 << " " << &arr[3] << "\n";    
    

//     cout << *(ptr + 0) << " " << arr[0] << "\n";
//     cout << *(ptr + 1) << " " << arr[1] << "\n";
//     cout << *(ptr + 2) << " " << arr[2] << "\n";
//     cout << *(ptr + 3) << " " << (arr + 3) << "\n";
    

//     // Common mistake
//     cout << *(ptr + 3) << " " << *ptr + 3 << "\n";
//     // 4 4 

//     return 0;
// }








// Pointers Arithmetic

// int main(){

//     int arr[] {3,5,7,9};

//     int *ptr = arr;

//     cout << *ptr << "\n";

//     ++ptr;
//     cout << *ptr << "\n";   

//     cout << *ptr++ << "\n";
//     cout << *ptr << "\n";

//     cout << *++ptr << "\n";
//     cout << *ptr << "\n";

//     cout << *--ptr << "\n";
//     cout << *ptr << "\n";

//     ptr -= 2;
//     cout << *ptr << "\n";

//     ptr = arr + 102;
//     cout << ptr - arr << "\n"; //It gives you the difference in number of cells in this case it is 102.


//     ptr = arr;
//     cout << ++*ptr << "\n"; // get value then increment it i.e. 4(in this case).
//     cout << ptr - arr << "\n"; // 0 = still same location

//     return 0;
// }






// Iterating over array
// int main(){

//     int arr[] {3,5,7,9};

//     int *ptr = arr;

//     while(ptr != arr + 4){
//         cout << *ptr++ << " ";
//     }
//     cout << "\n";

//     ptr = arr;
//     while(ptr != arr + 5){
//         cout << *ptr++ << " ";
//     }
//     cout << "\n";

//     return 0;
// }



// Iterating over char array
// int main(){

//     char arr[] = "hello";
//     char *ptr = arr;

//     while(*ptr != '\0'){
//         cout << *ptr++ << " ";
//     }

//     return 0;
// }



// Comparing Pointers
// int main(){

//     string str1 = "bhavesh";
//     string str2 = "bhavesh";

//     cout << (str1 == str2) << "\n";

//     string *p1 = &str1;
//     string *p2 {&str2}; //C++ style

//     // BE CAREFUL : Do you wanna compare two addresses or two values????????
//     cout << (p1 == p2) << "\n";
//     cout << (*p1 == *p2) << "\n";

//     return 0;
// }







// Pointers and Functions

// void do_math(int &x){

//     x += 1;
//     x  = x * 2;
//     x *= 2;

// }

// void do_math(int *x){

//     if(x == nullptr){
//         return;
//     }

//     *x += 1;
//     *x  = *x * 2;
//     *x *= 2;

// }

// void print(vector<int> *ptr){
//     for(auto val : *ptr){
//         cout << val << " ";
//     }
//     cout << "\n";
// }

// int main(){

//     int x1 = 10;

//     do_math(x1);

//     cout << x1 << "\n";


//     x1 = 10;


//     do_math(&x1);

//     cout << x1  << "\n";


//     vector<int> v {1,2,3};

//     print(&v);

//     return 0;
// }





// Return Pointer

// int *max(int *x, int *y){

//     if(x == nullptr){
//         return y;
//     }
//     if(y == nullptr){
//         return x;
//     }

//     if(*x > *y){
//         return x;
//     }
//     return y;

// }

// // Never do this. Local Variable will be destroyed.
// // int *some(){
// //     int temp = 10;
// //     return &temp;
// // }


// int main(){

//     int x = 5, y = 7;

//     int *p = max(&x, &y);

//     cout << *p << "\n";

//     return 0;
// }






// DYNAMIC MEMORY ALLOCATION


// Creating a single element

// int main(){

//     int x = 10;
//     int *p0 = &x;
//     int *p1 {nullptr};

//     int *p2 = new int; //New keyword creates a temporary dynamic memory in system.
//     *p2 = 20;


//     cout << *p2 << " " << &p2 << " " << p2 << "\n";

//     int *p3 = new int {30}; //C++ brace initialization style.
    

//     cout << *p2 << " " << *p3 << "\n";

//     // p0 points to x and p1 is null pointer so we don't have to worry about deleting them as compiler will deal with them.
//     // We created p2 and p3 dynamically(using new keyword) so delete them.

//     // delete keyword deletes dynamic memory.
//     delete p2;
//     delete p3;

//     p2 = p3 = nullptr;

//     return 0;
// }



// Creating more than element

// int main(){

//     const int SIZE = 10;
//     int arr[SIZE] {0};

//     int n = 20; // Not const
//     int *pArr = new int [n];

//     for(int i = 0; i < n; i++){
//         pArr[i] = i;
//     }

//     delete[] pArr;

//     // To delete array use delete[] and to delete a single element use delete.

//     return 0;
// }





// Pointer to struct

// struct employee{
//     int id = -1;
//     string name;

//     employee(){

//     }

//     employee(int _id, string _name){
//         id = _id;
//         name = _name;
//     }

//     void print(){
//         cout << id << " " << name << "\n";
//     }
// };


// int main(){

//     employee e1(10, "Mostafa");
//     e1.print();

//     // creating a single element
//     // int *x {new int(50)}
//     employee *e2 {new employee(20, "Belal")};
//     e2 -> print();

//     // to print any object of a struct we have two ways: e2 -> print() or (*e2).print().

//     employee *e3 = new employee();
//     (*e3).print();


//     employee *e4 = e2;
//     employee *e5 {&e1};

//     employee &e6 = *e2;
//     e2 -> id = 111;
//     e6.print();


//     vector<employee*> vec;
//     vec.push_back(e2);
//     vec.push_back(&e6);


//     // Delete only new ones
//     delete e2;
//     delete e3;

//     e2 = e3 = nullptr;

//     return 0;
// }