#ifndef INHERITANCE_H
#define INHERITANCE_H
#include <iostream>
#include <string.h>

using namespace std;

// base class
class Employee{
    private:
        string first_name;
        string family_name;
        char middle_initial;
        int hiring_date;
        short department;

    public:
        // constructor
        Employee();
        Employee(string first, string family){
                first_name = first;
                family_name = family;
        }
        // destructor
        ~Employee();

        string full_name();
        void printname();

};

// derived class
// all the variable belong to  Employee, the manager also has them
class Manager: public Employee{
    Employee* group[100];
    short level;
    
};


#endif