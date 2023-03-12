#include<iostream>
using namespace std;

// template<typename Type>
// Type my_max(Type a, Type b){
//     if(a > b){
//         return a;
//     }

//     return b;
// }

// int main(){

//     cout << max(10,202) << "\n";
//     cout << my_max(10.2, 15.2) << "\n";
//     cout << my_max<double>(10,20.2) << "\n";
//     cout << my_max<int>(10.5,29.3) << "\n";

//     return 0;
// }


// template<class type1, class type2>
// type1 sum(type1 a, type2 b){
//     type1 r = a + b;
//     return r;
// }

// int main(){

//     cout << sum(10,20.2) << "\n";
//     cout << sum(10.2,20) << "\n";
//     cout << sum<int , int>(1.2, 10) << "\n";
//     cout << sum('A', 1) << "\n";
//     cout << sum(1, 'A') << "\n";

//     cout << sum<string, string>("I am ", "mostafa.") << "\n";
//     cout << sum(string("Hi "), string("Hello world.")) << "\n";

// }



// template<class T>
// T add(T a, T b){
//     return a + b;
// }

// template<class T>
// T multiply(T a, int b){
//     return a*b;
// }

// template<>
// string multiply(string a, int b){

//     string res = "";

//     while(b--){
//         res += a;
//     }

//     return res;

// }

// int main(){

//     string s = "Sia";

//     cout << add(10,4) << "\n";
//     cout << add(s, s) << "\n";


//     cout << multiply(10,20) << "\n";
//     cout << multiply('A', 2) << "\n";

//     cout << multiply(s,4) << "\n"; 

//     return 0;
// }


// template<typename T>
// struct my_queue{

//     T arr[100];
//     int pos;

//     my_queue(){
//         pos = 0;
//     }

//     my_queue(T parameter_arr[], int len){
//         for(int i = 0; i < len; i++){
//             arr[i] = parameter_arr[i];
//             pos = len;
//         }
//     }

//     void add_front(T elem){
//         arr[pos++] = elem;
//     }

//     template<class type>
//     void sum_and_add(type a, type b){
//         arr[pos++] = a + b;
//     }

//     void print(){
//         for(int i = 0; i < pos; i++){
//             cout << arr[i] << "\n";
//         }
//         cout << "\n";
//     }

// };

// int main(){

//     my_queue<string> q_str;
//     q_str.add_front("mostafa");
//     q_str.add_front("saad");
//     q_str.print();

//     my_queue<int> i_str;
//     i_str.add_front(3);
//     i_str.add_front(2);
//     i_str.sum_and_add<double>(2.5,4.2);
//     i_str.print();

//     return 0;
// }




// Parameter Pack

// template<typename ... someargs>
// void hello(someargs ... args){
//     int size = sizeof ... (args);
//     cout << size << "\n";
// }

// int main(){

//     hello(1,2,3,4);
//     hello("mostafa", 5);
//     hello('a', 'b', 'c');
//     hello('sd');
//     hello();

//     return 0;
// }

// template<class ... Args>
// void hello(int a, string b, Args ... args){
//     int size = sizeof ... (args);

//     cout << a << " " << b << " " << size << "\n";
// }

// int main(){

//     hello(1, "Bhavesh");
//     hello(1, "Bhavesh", 2.5);
//     hello(1, "Bhavesh", 2.5, "me");

//     return 0;
// }



// Variadic Template used with recursion

// int sum(){
//     return 0;
// }

// template<class ... Args>
// int sum(int a, Args ... args){
//     return a + sum(args ...);
// }

// int main(){

//     cout << sum(1,2,3,4);

// }



// More generic code

// template<typename T>
// T sum(){
//     return 0;
// }

// template<typename T, typename ... Args>
// T sum(T a, Args ... args){
//     return a + sum<T>(args...);
// }


// int main(){

//     cout << sum(1,2,3,4,5) << "\n";
//     cout << sum(1.2,2.3,45,21,212.2) << "\n";
//     cout << sum(1,2.9,3.2) << "\n";
//     cout << sum<double>(1,2.23,4.2) << "\n";
// }




// Printing different types

// void print(){
//     cout << "\n";
// }

// template<typename T, typename ... Args>
// void print(const T& a, const Args& ... args){

//     int size = sizeof ... (args);

//     cout << a;
//     if(size > 0){
//         cout << ", ";
//     }

//     print(args...);

// }

// int main(){

//     print(1,2,3,4);
//     print("mostafa", 'c', 2, 5.2);

// }



// Unary right fold

// template<typename ... Args>
// int sum_unary_right_fold(Args ... args){

//     int size = sizeof ... (args);

//     cout << size << "\n";

//     return (args + ...);
// }


// int main(){

//     cout << sum_unary_right_fold(1,2,3,4) << "\n";

//     cout << sum_unary_right_fold(1) << "\n";

//     cout << sum_unary_right_fold() << << "\n" (Compilation error) 

//     return 0;
// }





// Binary right fold

// template<typename ... Args>
// int sum_binary_right_fold(Args ... args){

//     return (args + ... + 0);
// }

// int main(){

//     cout << sum_binary_right_fold(1,2,3,4) << "\n";

//     cout << sum_binary_right_fold(1) << "\n";

//     cout << sum_binary_right_fold() << "\n";
//     // 0

//     return 0;
// }


// Unary right fold and Binary left fold

// template<typename ... Args>
// int sum_unary_left_fold(Args ... args){

//     return (... + args);
// }

// template<typename ... Args>
// int sum_binary_left_fold(Args ... args){

//     return (0 + ... + args);
// }

// int main(){

//     cout << sum_unary_left_fold(1) << "\n";
//     cout << sum_unary_left_fold(1,2,3,4) << "\n";
//     // cout << sum_unary_left_fold() << "\n"; (compiler error) 

//     cout << sum_binary_left_fold(1) << "\n";
//     cout << sum_binary_left_fold(1,2,3,4) << "\n";
//     cout << sum_binary_left_fold() << "\n";
//     // 0


//     return 0;
// }


// Using auto

// auto multiply_binary_right_fold(auto ... args){

//     return (args * ... * 1);
// }

// int main(){

// cout << multiply_binary_right_fold(1,2,3,4) << "\n";

//     return 0;
// }


// Division fold function

// auto division_binary_right_fold(auto ... args){

//     return (args / ... / 1);
// }

// auto division_binary_left_fold(auto ... args){

//     return (1 / ... / args);
// }

// int main(){

//     double rez1 = division_binary_right_fold(4.0);
//     double rez2 = division_binary_left_fold(4.0);

//     cout << rez1 << " " << rez2;

//     return 0;
// }


// Applying function/ Functor

template<typename function>
auto sum_square(function func,auto ... args){

    return(func(args) + ... + 0);
}

int sq(int x){

    return x * x;   
}

int main(){

    cout << sum_square(sq , 1, 2, 3, 4);

    return 0;
}