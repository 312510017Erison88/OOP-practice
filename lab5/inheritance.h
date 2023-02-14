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
        double salary;
        double yearOfService;
        
    public:
        // constructor
        Employee();
        
        // destructor
        ~Employee();

        //method
        void set_name(string name);
        void set_year(double _year);
        void set_salary(double _salary);
        string get_name();
        double get_year();
        double get_salary();

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