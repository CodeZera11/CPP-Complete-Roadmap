#include<iostream>
#include<stdio.h>
using namespace std;

// class Person{
// public:
//     virtual void print(){
//         cout << "Person\n";
//     }

//     virtual ~Person(){
//         cout << "~Person\n";
//     }
// };

// class Student: public Person{
// public:
//     void print(){
//         cout << "Student\n";
//     }

//     ~Student(){
//         cout << "~Student\n";
//     }

// };

// int main(){

//     Person *std_ptr = new Student();
//     std_ptr->print();
//     std_ptr->Person::print();

//     delete std_ptr;

//     return 0;
// }




// Shape and Rectangle

class Shape{
private:
    string name;

public:
    Shape(string name) : name(name){        
    }

    virtual int Area(){
        throw logic_error("Not implemented. Do override\n");
        return -1;
    }

    string getShapeName(){
        return name;
    }

    virtual ~Shape(){
    }
};

class Rectangle: public Shape{

    int width;
    int height;

public:
    Rectangle(string name, int width, int height): Shape(name), width(width), height(height) {
    }

    int Area(){
        return width*height;
    }
};


void process(Shape *shape){
    cout << "This shape's name is: " << shape->getShapeName() << ".\n";
    cout << "And its area is: " << shape->Area() << "\n";
}

int main(){

    Rectangle r("Rect", 4, 5);
    process(&r);

    return 0;
}