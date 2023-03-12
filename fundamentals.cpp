#include<iostream>
using namespace std;


// Scientific Notation

// int main(){

//     cout << 6.7 << "\n";
//     cout << 9876543.21 << "\n";


//     cout.setf(ios :: scientific);
//     // Or also cout << std :: scientific

//     cout << 6.7 << "\n";
//     cout << 9876543.21 << "\n";

//     cout << 0.000000000008 << "\n";
//     cout << 146000.001 << "\n";


//     std :: cout.precision(10);
//     cout << 146000.001 << "\n";


//     // use standard not scientific
//     cout.setf(ios :: fixed, ios :: floatfield);
//     // show the decimal point for all floating point numbers
//     cout.setf(ios :: showpoint);

//     cout << 146000.001 << "\n";
//     cout << 100.0 << "\n";

//     return 0;
// }





// Rounding Errors

// int main(){

//     for(double r = 0.0; r != 1.0; r += 0.5){
//         cout << "*";
//     }

//     cout << "\n";

//     for(double r = 0.0; r != 1.0; r += 0.2){
//         cout << "#";
//     }

//     cout << "\n";

//     // Infinite because 0.1 in binary is a repitive number just like 1/3 = 0.3333333333
//     // for(double r = 0.0; r!= 1; r+= 0.1){
//     //     cout << "$";
//     // }

//     cout << "\n";

//     return 0;
// }



int main(){

    enum colors {red, green, blue};

    colors r = red;
    cout << r << "\n";

    enum month{jan = 1, feb, mar, apr};

    cout << mar << "\n";

    return 0;
}