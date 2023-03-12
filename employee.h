#ifndef EMPLOYEE_H_
#define EMPLOYEE_H_


#include<iostream>
using namespace std;

namespace oursystem{

struct employee{

    string name;

    employee(string _name);

    void print();

};

extern employee *emp_global;

}

#endif