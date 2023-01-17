#include <iostream>
#include <fstream>
#include "practice.h"
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc, char **argv){
    //declare a file name variable
    ifstream input_file;
    ofstream output_file;

    //open the file
    input_file.open(argv[1], ios::in);
    cout << input_file.is_open() << endl;
    
    string str;
    vector<string> input1;
    vector<int> input2;
    char line[128];

    while(input_file.getline(line, sizeof(line), '\n')){
        cout<<line<<endl;
    }

/*
    while(input_file>>str){
        cout << str << endl;
    } 
*/
    if(input_file.eof())
        cout << "EOF" << endl;
    else
        cout << "error" << endl; 

    input_file.close();

    //output.open("file_path/filename");

    function(1000);
    return 0;
}