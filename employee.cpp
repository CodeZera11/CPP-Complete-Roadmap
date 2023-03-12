#include "employee.h"

namespace oursystem{
    
employee *emp_global = new employee("Mostafa");

employee :: employee(string _name){
    name = _name;
}

void employee :: print(){
    cout << "I am " << name << "\n";
}

}