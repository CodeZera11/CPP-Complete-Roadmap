#include<iostream>
using namespace std;

string* myfunc(string *ptr){
    ptr += 3;
    return ptr;
}

int main(){

    string *x, *y;
    x = "HELLO";
    y = myfunc(x);

    cout << y << "\n";

    return 0;
}