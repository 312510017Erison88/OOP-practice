#include <iostream>
#include <iomanip>
#include "inheritance.h"

using namespace std;

//constructor
Employee::Employee(){}

//destructor
Employee::~Employee(){}

//constructor
Manager::Manager(){}

//destructor
Manager::~Manager(){}

string Employee::get_name(){
    return first_name;
}

double Employee::get_year(){
    return yearOfService;
}

void Employee::set_salary(double _salary){
    salary = _salary;
}

double Employee::get_salary(){
    return salary;
}

string Employee::full_name(){
            return string(family_name)+string(first_name);
        }

void Employee::printname(){
    cout << "Name is " << full_name() << endl;
}

/* function of operator << */
ostream& operator<<(ostream& os, const Employee& rhs){
    os << setw(20)<< left<< rhs.first_name << rhs.salary << "  "<< setw(5)<< rhs.yearOfService << setw(7)<< right<< rhs.salary;
    return os;
}