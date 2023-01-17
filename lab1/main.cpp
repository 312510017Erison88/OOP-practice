#include <iostream>
#include <fstream>
#include "practice.h"
using namespace std;

int main(){
    //declare a file name variable
    ifstream input;
    ofstream output;

    //open the file
    input.open("input1.in");
    cout << input.is_open() << endl; 
    input.close();

    //output.open("file_path/filename");



    function(1000);
    return 0;
}