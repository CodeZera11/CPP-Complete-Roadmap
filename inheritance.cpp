#include<iostream>
using namespace std;

class A{
public:

    A(string str){
        cout << "Constructor " << str << "\n";
    }

    ~A(){
        cout << "~A\n";
    }
};

class B{

    A a1;

public: 
    B() : a1(A("Most")) {
        cout << "Constructor B" << "\n";
    }

    ~B(){
        cout << "~B\n";
    }
};

class C: public B{

    A a2;

public:
    C(): a2(A("Ali")){
        cout << "Constructor C" << "\n";
    }

    ~C(){
        cout << "~C\n";
    }
};

int main(){

    C c1;
    C *c2;

    return 0;
}