#include<iostream>
#include<vector>
using namespace std;


// THROW KEYWORD TERMINATES THE PROGRAM IF EXCEPTION IS FOUND AND CATCH KEYWORD ONLY CATCHES THE EXCEPTION

// struct bank_acccount{

//     int money = 1000;

//     bool pay_bill(int _amount){
//         if(_amount < 0){
//             throw invalid_argument("Bill amount can't be negative!!!!");
//         }

//         if(money > _amount){
//             money -= _amount;
//             return true;
//         }else{
//             return false;
//         }
//     }

// };


// int main(){
    
//     bank_acccount x;

//     cout << x.pay_bill(100) << "\n";
//     cout << x.pay_bill(10000000) << "\n";
//     cout << x.pay_bill(-100) << "\n";
//     cout << x.pay_bill(100) << "\n"; // Won't be processed as program will be terminated after getting negative value


//     return 0;
// }








// Vector : [] vs at()

// int main(){

//     vector<int> v(10);

//     // Wrong(out of boundary) but program will not terminate
//     int t = v[25];
//     cout << t << "\n";

//     // "at" keyword validates and throws out_of_range exception and therefore program will be terminated
//     t = v.at(25);
//     cout << "Bye" << "\n"; // Won't be displayed

//     return 0;
// }




// Catching the exception

// struct bank_account{

//     int money = 1000;

//     bool pay_bill(int _amount){
//         if(_amount < 0){
//             throw invalid_argument("Bill value can't be negative!!!!!!!!!!!!");
//         }

//         if(money >= _amount){
//             money -= _amount;
//             return true;
//         }else{
//             return false;
//         }
//     }
// };


// int main(){

//     bank_account x;

//     try{
//         cout << x.pay_bill(100) << "\n";
//         cout << x.pay_bill(10000000) << "\n";
//         cout << x.pay_bill(-100) << "\n";
//         cout << x.pay_bill(200) << "\n";
//     } catch(invalid_argument &e){
//         cout << "Caught an exception: " << e.what() << "\n";
//     }
//     cout << "Bye";

//     return 0;
// }


// Throwing the caughted exception

// struct bank_account{

//     int money = 1000;

//     bool pay_bill(int _amount){
//         if(_amount < 0){
//             throw invalid_argument("Bill value can't be negative!!!!!!!!!!!!");
//         }

//         if(money >= _amount){
//             money -= _amount;
//             return true;
//         }else{
//             return false;
//         }
//     }
// };


// int main(){

//     bank_account x;

//     try{
//         cout << x.pay_bill(100) << "\n";
//         cout << x.pay_bill(10000000) << "\n";
//         cout << x.pay_bill(-100) << "\n";
//         cout << x.pay_bill(200) << "\n";
//     } catch(invalid_argument &e){
//         cout << "Caught an exception: " << e.what() << "\n";
//         throw e; 
//     }
//     cout << "Bye"; // In this case it won't be printed as exception was thrown.
    
//     return 0;
// }





// Multiple Exceptions Handling


// Throwing Several Extension Types


// int *createarrayonmobile(int len){
//     if (len < 0) {
//         throw invalid_argument("Array length cannot be negative or zero!");
//     }

//     if(len > 10000){
//         throw runtime_error("Too big array for this memory");
//     }

//     return new int[len];
// }



// Catching the wrong Exception


// int *createarrayonmobile(int len){
//     if (len < 0) {
//         throw invalid_argument("Array length cannot be negative or zero!");
//     }

//     if(len > 10000){
//         throw runtime_error("Too big array for this memory");
//     }

//     return new int[len];
// }

// int main(){

//     int *p = nullptr;

//     try{
//         int *p = createarrayonmobile(-10)''
//     }catch(runtime_error &e){
//         cout << e.what();
//     }

//     if(p != nullptr){ 
//         delete[] p;
//         p = nullptr;
//     }

//     return 0;
// }





// Catching Multiple Exceptions

// int *createarrayonmobile(int len){
//     if (len < 0) {
//         throw invalid_argument("Array length cannot be negative or zero!");
//     }

//     if(len > 10000){
//         throw runtime_error("Too big array for this memory");
//     }

//     return new int[len];
// }

// int main(){

//     int *p = nullptr;

//     try{
//         int *p = createarrayonmobile(-10);
//     }catch(invalid_argument &e){
//         cout << "Invalid argument: " << e.what();
//     }catch(runtime_error &e){
//         cout << "Runtime error: " << e.what();
//     }catch(...){
//         cout << "caught an unknown exception type\n";
//     }

//     if(p != nullptr){
//         delete[] p;
//         p = nullptr;
//     }

//     return 0;
// }






// Throwing Integer

// int *createArrayOnMobile(int len){

//     if(len < 0){
//         throw 17; //Maybe some error code
//     }
//     if(len > 1000000){
//         throw runtime_error("Too big array for this mobile memory!");
//     }

//     return new int[len];

// }

// int main(){

//     int *p = nullptr;

//     try{
//         int *p = createArrayOnMobile(-10);
//     }catch(runtime_error &e){
//         cout << "Runtime Error: " << e.what();
//     }catch(...){
//         cout << "Caught an unknown Error";
//     }

//     if(p != nullptr){
//         delete[] p;
//         p = nullptr;
//     }

//     return 0;
// }




// Catch Integer

// int *createArrayOnMobile(int len){
//     if(len < 0){
//         throw 17;
//     }
//     if(len > 100000){
//         throw runtime_error("It is too big for this mobile memory");
//     }

//     return new int[len];
// }

// // In this if double was written like createArrayOnMobile(10.23) then it will be caught in catch(...).

// int main(){

//     int *p = nullptr;

//     try{
//         int *p = createArrayOnMobile(-10);
//     }catch(int &error_code){ 
//         cout << "Error code: " << error_code;
//     }catch(...){
//         cout << "Caught an unknown errror!";
//     }

//     if(p != nullptr){
//         delete[] p;
//         p = nullptr;
//     }

//     return 0;
// }







// Multiple Functions

// struct employee{

//     int id;

//     employee(int _id){
//         id = _id;
//     }

//     ~employee(){
//         cout << "Destroy Employee: " << id << "\n";
//     }

// };

// void f4(){

//     cout << "Start f4\n";

//     employee *p = new employee(4);

//     throw 1;
    
//     delete p; //Memory leak because program will terminate after throw 1 and p delete hi nhi hua isiliye memory leak.

//     cout << "end f4\n";

// }

// void f3(){

//     cout << "Start f3\n";
    
//     employee p(3);

//     f4();

//     cout << "end f3";

// }

// void f2(){

//     cout << "Start f2\n";

//     try{
//         f3();
//     }catch(runtime_error &e){
//         // no effect because integer throw kiya hai and ye runtime error hai
//         cout << "runtime error: " << e.what() << "\n";
//     }

//     cout << "end f2\n";

// }

// void f1(){

//     cout << "Start f1\n";

//     try{
//         f2();
//     }catch(int &e){
//         cout << "Error code: " << e << "\n";
//     }

//     cout << "End f1\n";

// }

// int main(){
//     f1();
// }