#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "inheritance.h"

using namespace std;

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
    vector <float> month;
    
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
        month.push_back(m);
    }
    //print
    for(int i=0; i<name.size(); i++){
        cout << name[i] << " " << classname[i] << " " << month[i] << endl;
    }


    Employee object(" hi", "good");
    string test;
    
    test = object.full_name();
    object.printname();
    cout << "test" << endl;
    
    return 0;
}