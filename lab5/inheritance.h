#ifndef INHERITANCE_H
#define INHERITANCE_H
#include <iostream>
#include <string.h>

using namespace std;

// base class
class Employee{
    friend ostream& operator<<(ostream&, const Employee&);

    private:
        string first_name;
        string family_name;
        double salary;
        double yearOfService;

    protected:
        string get_name();
        double get_year();
        void set_salary(double _salary);

    public:
        // constructor
        Employee();
        Employee(string first, string family){
                first_name = first;
                family_name = family;
        }
        // destructor
        ~Employee();

        //method
        double get_salary();
        string full_name();
        void printname();

};

// derived class
// all the variable belong to Employee, the manager also has them
class Manager: public Employee{
    private:
        //Employee* group[100];
        short level;

    public:
        //constructor
        Manager();
        //destructor
        ~Manager();
};


#endif