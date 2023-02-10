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

void Employee::set_year(double _year){
    yearOfService = _year;
}

double Employee::get_year(){
    return yearOfService;
}

void Employee::set_name(string _name){
    first_name = _name;
}

void Employee::set_salary(double _salary){
    salary = _salary;
}

string Employee::get_name(){
    return first_name;
}

double Employee::get_salary(){
    return salary;
}

/* function of operator << */
ostream& operator<<(ostream& os, const Employee& rhs){
    os << setw(20)<< left<< rhs.first_name << rhs.salary << "  "<< setw(5)<< rhs.yearOfService << setw(7)<< right<< rhs.salary;
    return os;
}