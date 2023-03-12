#include<iostream>
#include<cstdlib>
using namespace std;

// sum from 1 to n using functions;

// int sum_total(int n){
//     int sum = 0;

//     for(int i = 1; i <= n; i++){
//         sum += i;
//     }

//     return sum;
// }

// int main(){
//     int n;

//     cin >> n;

//     int result = sum_total(n);

//     cout << result;

//     return 0;
// }



// Function :: Absolute

// int absolute(int n){

//     if(n >= 0){
//         return n;
//     }

//     return -n;
// }

// int main(){
//     cout << absolute(5) << "\n";
//     cout << absolute(-5) << "\n";

//     return 0;
// }



// Function :: Max of two nums

// int max_num(int a, int b){
//     if(a >= b){
//         return a; 
//     }

//     return b;
// }

// int main(){

//     int a,b;

//     cin >> a >> b;

//     int maximum = max_num(a,b);

//     cout << maximum;

//     return 0;
// }





// Function :: Maximum of absolute 2 numbers

// int absolute(int n){
//     if(n >= 0){
//         return n;
//     }

//     return -n;
// }


// int maximum(int a, int b){
//     a = absolute(a);
//     b = absolute(b);

//     if(a >= b){
//         return a;
//     }

//     return b;
// }

// int main() {

//     int x, y;
//     cin >> x >> y;

//     cout << maximum(x, y);

// }



// Function with no parameters or no return

// int lucky_num(){
//     return 13;
// }

// int main2(){
//     return 0;
// }

// void sum(int a, int b){
//     cout << a + b << "\n";
// }

// int main(){
//     cout << lucky_num() << "\n";

//     sum(5,19);

//     return 0;
// }



// Function with default values

// int power_function(int a, int b = 3){
//     int result = 1;

//     while(b--){
//         result *= a;
//     }

//     return result;
// }

// int main(){
//     cout << power_function(2) << "\n";
//     cout << power_function(2,3) << "\n";
//     cout << power_function(2,4) << "\n";
// }



// Parameter Casting

// int add(int a, int b){
//     return a + b;   
// }

// int main(){
//     cout << add(2, 3) << "\n";
//     // here double will be casted into an int
//     cout << add(2, 3.5) << "\n";

//     return 0;
// }



// Function Overloading

// We can define several functions with SAME NAME but DIFFERENT PARAMETERS(types or their count)

// int add(int a, int b){
//     return a + b;
// }

// double add(double a, double b){
//     return a + b;
// }

// int add(int a, int b, int c){
//     return a + b + c;
// }

// int main(){
//     cout << add(1,2) << "\n";
//     cout << add(1.5, 2.5) << "\n";
//     cout << add(1, 2, 3) << "\n";
// }



// Pass Arguements: Value V/S Reference

// void change(int a, int &b){
//     a++;
//     b++;
// }

// void read(int x, int &y, string &str){
//     cin >> x >> y >> str;
// }


// int main(){
//     int a = 1, b = 1;

//     change(a,b);

//     cout << a << " " << b << "\n";

//     string name;
//     read(a,b,name);

//     cout << a << " " << b << " " << name << "\n";
// }



// Pass array by reference(default)

// By default array is passed by reference......

// int array_sum(int arr[], int length){
//     int sum = 0;

//     for(int i = 0; i < length; i++){
//         sum += arr[i];
//     }

//     return sum;
// }

// int main(){
//     int arr[6] = {1,2,3,4,5,6};
//     cout << array_sum(arr, 3) << "\n";
//     cout << array_sum(arr, 6) << "\n"; 

// }



// Funtion :: Is lower string??

// int is_lower(string str){
    
//     for(int i = 0; i < (int)str.size(); i++){
//         bool lower = (str[i] >= 'a' && str[i] <= 'z');

//         if(!lower){
//             return false;
//         }
//     }

//     return true;

// }

// int main(){

//     cout << is_lower("abc") << "\n";
//     cout << is_lower("aBc") << "\n";

//     return 0;

// }



// Is lower again using built-in function(#include<cstdlib>)

// int is_lower(const string &str){
//     for(int i = 0; i < (int)str.size(); i++){
//         if(!islower(str[i])){
//             return false;
//         }
//     }

//     return true;
// }    

// int main(){

//     cout << is_lower("abC") << "\n";
//     cout << is_lower("abc") << "\n";

//     return 0;

// }



// Global, Static and Local Variables

// int global_var {10};

// void fun(){
//     int i1 {0};
//     int i2;
//     static int i3 {0};

//     ++i1, ++i3;

//     global_var += 10;

//     cout << i1 << " " << i3 << " " << global_var << "\n";
// }

// int main(){
//     fun(), fun(), fun();

//     cout << global_var << "\n";
// }



// Max of 6 numbers

// int max(int a, int b, int c){
//     return max(a,max(b,c));
// }

// int max(int a, int b, int c, int d){
//     return max(a,max(b,c,d));
// }

// int max(int a, int b, int c, int d, int e){
//     return max(a,max(b,c,d,e));
// }

// int max(int a, int b, int c, int d, int e, int f){
//     return max(a,max(b,c,d,e,f));
// }

// int main(){
//     cout << max(1,6,3,8,5,6);
//     return 0;
// }





// Reverse a string

// string reverse_str(const string &str){
//     for(int i = str.size()-1; i >= 0; i--){
//         cout << str[i];
//     }
// }

// int main(){

//     string str;
//     cin >> str;

//     reverse_str(str);
//     return 0;
// }

// or

// string reverse_str(const string &str){
//     string reverse = str;

//     int start = 0, end = (int)str.size()-1;

//     while(start < end){
//         char temp = reverse[end];
//         reverse[end] = reverse[start];
//         reverse[start] = temp;

//         start++, end--;
//     }

//     return reverse;
// }

// int main(){
//     cout << reverse_str("abc") << "\n";
//     cout << reverse_str("abcdef");
// }





// Calculator using function

// int menu(){

//     int choice = -1;
//     while(choice == -1){
        
//         cout << "\nChoose one of the following: \n";
//         cout << "1. Add 2 numbers.\n";
//         cout << "2. Substract 2 numbers.\n";
//         cout << "3. Multiply 2 numbers.\n";
//         cout << "4. Divide 2 numbers.\n";
//         cout << "5. Exit.\n";

//         cin >> choice;

//         if(choice < 1 || choice > 3){
//             cout << "Invalid Choice";
//             choice = -1;
//         }
//     }

//     return choice;

// }

// void read_2_num(double &a, double &b){
//     cin >> a >> b;
// }

// void add(double a, double b){
//     cout << "a + b = " << a + b;
// }

// void substract(double a, double b){
//     cout << "a - b = " << a - b; 
// }

// void multiply(double a, double b){
//     cout << "a x b = " << a * b;
// }

// void divide(double a, double b){
//     if(b != 0){
//         cout << "a/b = " << a/b;
//     }else{
//         cout << "Can't divide by zero!!";
//     }
// }




// int main(){
    
//     int operations = 0;
//     double a, b;

//     while(true){
//         int choice = menu();

//         if(choice == 5){
//             break;
//         }

//         operations++;

//         read_2_num(a,b);

//         if(choice == 1){
//             add(a,b);
//         }else if(choice == 2){
//             substract(a,b);
//         }else if(choice == 3){
//             multiply(a,b);
//         }else if(choice == 4){
//             divide(a,b);
//         }
//     }

//     cout << "Total Operations = " << operations << "\n";

//     return 0;

// }




// Calculator

// int menu(){
//     int choice = -1;

//     while(choice == -1){
//         cout << "Choose an operation: \n";
//         cout << "1. Add two numbers.\n";
//         cout << "2. Subtract two numbers. \n";
//         cout << "3. Multiply two numbers. \n";
//         cout << "4. Divide two numbers. \n";
//         cout << "5. Exit\n";

//         cin >> choice;

//         if(!(choice >= 1 && choice <= 5)){
//             cout << "Invalid!!!!!!!!!";
//             choice = -1;
//         }
//     }

//     return choice;
// }

// void read_two_num(double &a, double &b){
//     cin >> a >> b;
// }

// void add(double a, double b){
//     cout << "a + b = " << a + b << "\n";
// }

// void subtract(double a, double b){
//     cout << "a - b = " << a - b << "\n";
// }

// void multiply(double a, double b){
//     cout << "a x b = " << a * b << "\n";
// }

// void divide(double a, double b){
//     if(b != 0){
//         cout << "a / b = " << a/b << "\n";
//     }else{
//         cout << "Denominator can't be zero. Error!!!!!!!!" << "\n";
//     }
// }

// int calculator(){
//     int operations = 0;

//     double a, b;

//     while(true){
//         int choice = menu();

//         if(choice == 5){
//             break;
//         }

//         operations++;

//         read_two_num(a, b);

//         if(choice == 1){
//             add(a, b);
//         }else if(choice == 2){
//             subtract(a, b);
//         }else if(choice == 3){
//             multiply(a, b);
//         }else if(choice == 4){
//             divide(a, b);
//         }
//     }
    
// }

// int main(){
//     calculator();
//     return 0;
// }



// Is Palindrome using funtions?

// int read_array(int arr[]){
//     int n;
//     cin >> n;

//     for(int i = 0; i < n; i++){
//         cin >> arr[i];
//     }

//     return n;
// }

// bool is_palindrome(int n, int arr[]){
//     int start = 0, end = n-1;

//     while(start < end){
//         if(arr[start] != arr[end]){
//             return false;
//         }

//         start++, end--;
//     }

//     return true;
// }

// int main(){
//     int arr[1000];

//     int n = read_array(arr);

//     bool check = is_palindrome(n, arr);

//     if(check == true){
//         cout << "YES";
//     }else{
//         cout << "NO";
//     }

//     return 0;

// }






// Set Powers

// void set_powers(int arr[], int len, int m){
//     arr[0] = 1;
//     for(int i = 1; i <= len; i++){
//         arr[i] = arr[i-1] * m;
//     }

//     for(int i = 0; i < len; i++){
//         cout << arr[i] << " ";
//     }
// }

// int main(){
//     int arr[1000];

//     int len, m;

//     cin >> len >> m;

//     set_powers(arr, len, m);
// }






// Get nth Prime

// bool is_prime(int num){

//     if(num <= 1){
//         return false;
//     }

//     for(int i = 2; i < num; i++){
//         if(num % i == 0){
//             return false;
//         }
//     }

//     return true;

// }


// int nth_prime(int n){
    
//     for(int i = 2; ; i++){
//         if(is_prime(i)){
//             --n;
//             if(n == 0){
                
//                 return i;
//             }
//         }
//     }

//     return -1;

// }


// int main(){

//     for(int i = 1; i < 20; i++){
//         cout << nth_prime(i) << " ";
//     }
    
//     return 0;

// }




// Replace Substring

bool starts_with(string input, string pattern, int pos){
    for(int i = 0; i < (int)input.size(); i++){
        
    }
}

string replace_str(string input, string pattern, string to){

}