#ifndef INHERITANCE_H
#define INHERITANCE_H
#include <iostream>
#include <string.h>

using namespace std;

// base class
class Employee{
    string first_name;
    string family_name;
    char middle_initial;
    int hiring_date;
    short department;

    public:
        string full_name(){
            return string(family_name)+string(first_name);
        }

        void printname() {
            cout << "Name is " << full_name() << endl;
        }

};

// derived class
// all the variable belong to  Employee, the manager also has them
class Manager: public Employee{
    Employee* group[100];
    short level;
    
};



#endif