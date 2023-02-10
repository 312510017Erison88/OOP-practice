#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "inheritance.h"

using namespace std;

#define BASE 20000.0

int main(int argc, char **argv){
    // read the input file
    ifstream inputstream;
    inputstream.open(argv[1], ios::in);
    if(inputstream.fail()){
        cout << "Input file is failed." << endl; 
    }
    // first line
    int name_num;
    inputstream >> name_num;
    cout << name_num << endl;
    string name_buffer;
    vector <string> name;
    vector <char> classname;
    vector <float> year;
    
    //name class month
    while(inputstream >> name_buffer){
        string buffer;
        getline(inputstream, buffer);
        istringstream inStr(buffer);

        string n;
        char c; 
        float m = 0.0;
        
        inStr >> c >> m;
        name.push_back(name_buffer);
        classname.push_back(c);
        year.push_back(m);
    }
    inputstream.close();

    //print
    for(int i=0; i<name.size(); i++){
        cout << name[i] << " " << classname[i] << " " << year[i] << endl;
    }

    //open output file
    ofstream outputstream;
    outputstream.open(argv[2], ios::out);
    if(outputstream.fail()){
        cout << "Output file is failed." << endl; 
    }
    // calculate salary
    for(int i=0; i<classname.size(); i++){
        if(classname[i]=='M'){
            Employee employee;
            employee.set_year(year[i]);
            double yearofservice = employee.get_year();
            employee.set_name(name[i]);
            employee.set_salary(BASE + yearofservice*1000);
            //outputstream << employee.get_name() << " " << employee.get_salary() << endl;
            outputstream << employee; 
        }
        if(classname[i]=='E'){
            Employee employee;
            employee.set_year(year[i]);
            double yearofservice = employee.get_year();
            employee.set_name(name[i]);
            employee.set_salary(BASE +15000+ yearofservice*5000);
            //outputstream << employee.get_name() << " " << employee.get_salary() << endl; 
            outputstream << employee; 
        }
    }
    outputstream.close();

    return 0;
}