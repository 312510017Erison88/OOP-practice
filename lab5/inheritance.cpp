#include <iostream>
#include "inheritance.h"

using namespace std;

string Employee::full_name() {
            return string(family_name)+string(first_name);
        }

void Employee::printname() {
    cout << "Name is " << full_name() << endl;
}