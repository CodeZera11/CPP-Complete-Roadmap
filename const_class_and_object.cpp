#include<iostream>
#include<stdio.h>
using namespace std;

class rectangle{

private:
    double width;
    double height;

public:
    rectangle(double width = 0.0, double height = 0.0)  :
            width(width), height(height) {
    }

    double compute_Area() const{
        return width*height;
    }

    double getHeight() const{
        return height;
    }

    void setHeight(double height){
        this->height = height;
    }

    double getWidth() const{
        return width;
    }

    void setWidth(double width) const{
        this->width = width;
    }

};

int main(){

    rectangle r1(2,3);
    r1.compute_Area();
    r1.setHeight(10);


    const rectangle r2(4,5);
    r2.compute_Area();
    // r2.setHeight(10);  //this will cause C.E. because const object can only call const function

    return 0;
}