#include<iostream>
using namespace std;


// Factorial

// int factorial(int n){


//     if(n == 1){
//         return 1;
//     }

//     return factorial(n-1)*n;
   
// }

// int main(){

//     int n;

//     cin >> n;

//     cout << factorial(n);
// }


// Left-Triangle

// void print_triangle(int levels){
//     if(levels == 0){
//         return;
//     }

//     print_triangle(levels-1);

//     for(int i = 0; i < levels; i++){
//         cout << "*";
//     }

//     cout << "\n";
// }

// int main(){
//     print_triangle(5);
    
//     return 0;
// }



// Print 3n+1 Sequence

// int count = 0;

// int length_of_sequence(){
//     count++;
// }

// int sequence(int n){

//     length_of_sequence();

//     cout << n << " ";

//     if(n == 1){
//         return 1;
//     }

//     if(n % 2 == 0){
//         sequence(n/2);
//     }

//     if(n % 2 != 0){
//         sequence(3*n + 1);
//     }
// }


// int main(){
//     int n;

//     cin >> n;

//     sequence(n);

//     cout << "\n" << "Length of sequence is : " << count;
// }





// Power Functions

// int power(int value, int p = 2){

//     if(p == 0){
//         return 1;
//     }

//     return value * power(value, p-1);

// }

// int main(){

//     cout << power(7) << "\n";
//     cout << power(7,3) << "\n";
//     cout << power(7,5) << "\n";

// }




// Array Maximum

// int arr_max(int arr[], int len){

//     if(len == 1){
//         return arr[0];
//     }

//     int sub_result = arr_max(arr, len-1);

//     return max(sub_result, arr[len-1]);

// }

// int main(){

//     int arr[100], len;

//     cin >> len;

//     for(int i = 0; i < len; i++){
//         cin >> arr[i];
//     }

//     cout << arr_max(arr, len);

// }



// Array Sum

// int array_sum(int arr[], int len){

//     if(len == 1){
//         return arr[0];
//     }   

//     int sub_result = array_sum(arr, len-1);

//     return arr[len-1] + sub_result;

// }


// int main(){

//     int len = 5;

//     int arr[len] = {1,2,3,4,5};

//     cout << array_sum(arr, len);

// }


// Array Average


// double average(int arr[], int len){

//     if(len == 1){
//         return arr[0];
//     }

//     double sub_result = average(arr, len-1);

//     sub_result = sub_result * (len-1);

//     return (sub_result + arr[len-1])/len;

// }

// int main(){

//     int arr[] = {1,8,2,10,3};

//     cout << (double)average(arr, 5);

//     return 0;

// }



// Array Increment

// void array_increment(int arr[], int len){
   
//    if(len == 1){
//         return;
//     }
    
//     array_increment(arr, len-1);

//     arr[len-1] += len-1;

// }

// int main(){

//     int arr[] = {1,8,2,10,3};

//     array_increment(arr, 5);

//     for(int i = 0; i < 5; i++){
//         cout << arr[i] << " ";
//     }

//     return 0;

// }


// Array Accumulation

// void accumulate_arr(int arr[], int len){

//     if(len == 1){
//         return;
//     }

//     accumulate_arr(arr, len-1);

//     arr[len-1] += arr[len-2];

// }

// int main(){

//     int len = 6;

//     int arr[6] = {1,2,3,4,5,6};

//     accumulate_arr(arr, len);

//     for(int i = 0; i < len; i++){
//         cout << arr[i] << " ";
//     }

// }




// Left Max

// void left_max(int arr[], int len){
//     if(len == 1){
//         return;
//     }

//     left_max(arr, len-1);

//     arr[len-1] = max(arr[len-1], arr[len-2]) ;

// }

// int main(){

//     int arr[] = {1,3,5,7,4,2};

//     left_max(arr,6);

//     for(int i = 0; i < 6; i++){
//         cout << arr[i] << " ";
//     }

// }



// Right Max

// void right_max(int arr[], int len, int start_position = 0){

//     if(start_position == len-1){
//         return;
//     }

//     right_max(arr, len, start_position+1);

//     arr[start_position] = max(arr[start_position], arr[start_position+1]);

// }

// int main(){

//     int arr[] = {1,3,5,7,4,2};

//     right_max(arr, 6, 0);

//     for(int i = 0; i < 6; i++){
//         cout << arr[i] << " ";
//     }

// }



// Suffix Sum

// int sum = 0;

// void suffix_sum(int arr[],int len, int position){

//     if(position == len+1){
//         return;
//     }


//     suffix_sum(arr, len, position + 1);

//     sum += arr[position-1];

// }

// int main(){

//     int arr[] = {1,3,4,6,7};

//     suffix_sum(arr, 5, 3);

//     cout << sum;

// }



// Prefix Sum

// int sum = 0;

// void prefix_sum(int arr[], int len, int position){
//     if(position == 0){
//         return;
//     }

//     prefix_sum(arr, len, position-1);
    
//     sum += arr[position-1];

// }

// int main(){

//     int arr[] = {2,3,4,5,6,7,8,9};

//     prefix_sum(arr, 5, 4);

//     cout << sum;

//     return 0;
// }


// Is Palindrome?

// int count = 0;

// bool is_palindrome(int arr[], int start, int end){
    
//     if(start >= end){
//         return true;
//     }

//     if(arr[start] != arr[end]){
//         return false;
//     }

//     return is_palindrome(arr, start+1, end-1);

// }

// int main(){

//     int arr[] = {1,8,2,3,1};

//     cout << is_palindrome(arr, 0, 4);

// }




// Is_Prefix

// bool is_prefix(string main, string prefix, int start_pos = 0){

//     if(start_pos == prefix.size()){
//         return true;
//     }

//     if(prefix[start_pos] != main[start_pos]){
//         return false;
//     }

//     return is_prefix(main, prefix, start_pos+1);

// }

// int main(){

//     string main = "abcdefgh";

//     string prefix;

//     cin >> prefix;

//     cout << is_prefix(main, prefix, 0); 

// }



// Trace

// void do_something(int n){
//     if(n){
//         do_something(n/10);
//         cout << n % 10;

//         // cout << n % 10;
//         // do_something(n/10);
        
//     }
// }

// int main(){

//     do_something(123456);

//     return 0;
// }


// Count Primes

// bool is_prime(int m, int tester = 3){
//     if(m == 2){
//         return true;
//     }

//     if(m <= 1 || m % 2 == 0){
//         return false;
//     }

//     if(m == tester){
//         return true;
//     }

//     if(m % tester == 0){
//         return false;
//     }

//     return is_prime(m, tester+1);
// }

// int count_prime(int start, int end){

//     if(start > end){
//         return 0;
//     }

//     int count = count_prime(start+1, end);

//     if(is_prime(start)){
//         count += 1;
//     }

//     return count;

// }

// int main(){

//     int start, end;

//     cin >> start >> end;

//     cout << count_prime(start, end);

// }



// Grid Sum(NOT DONE)

// {r, l , d}
//     int di[] = {0,  0, 1};
//     int dj[] = {1, -1, 1};

// int path_sum(int arr[100][100], int rows, int cols, int ROWS, int COLS){

//     int sum = arr[rows][cols];

//     if(rows == ROWS-1 && cols == COLS-1){
//         return sum;
//     }


//     int max = arr[rows][cols];
//     int max_idx = -1;

//     for(int d = 0; d < 3; d++){

//         int ni = rows + di[d];
//         int nj = cols + di[d];

//         if(ni >= ROWS || nj >= COLS){
//             continue;
//         }

//         if(max < arr[ni][nj]){
//             max = arr[ni][nj];
//             max_idx = d;
//         }

//     }

//             int new_rows = rows + di[max_idx];
//             int new_cols = cols + dj[max_idx];

//     return sum + path_sum(arr,new_rows, new_cols, ROWS, COLS);

// }

// int main(){

//     int arr[100][100];

//     int rows, cols;

//     cin >> rows >> cols;

//     for(int i = 0; i < rows; i++){
//         for(int j = 0; j < cols; j++){
//             cin >> arr[rows][cols];
//         }
//     }

//     cout << path_sum(arr, 0, 0, rows, cols);

//     return 0;

// }



// Fibonacci

int fibonacci(int n){

    if(n <= 1){
        return 1;
    }

    int result = fibonacci(n-1) + fibonacci(n-2);

    return result;

}

int main(){

    int n;

    cin >> n;

    cout << fibonacci(n);

    return 0;

}