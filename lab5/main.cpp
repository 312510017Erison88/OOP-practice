#include <iostream>
#include "inheritance.h"

using namespace std;

int main(){
    Employee object(" hi", "good");
    string test;
    
    test = object.full_name();
    cout << test << endl;

    cout << "test" << endl;
    
    return 0;
}