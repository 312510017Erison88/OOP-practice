#include <iostream>
#include <fstream>
#include "practice.h"
#include <algorithm>
#include <vector>
#include <string.h>
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
    vector<vector<string> > matrix;
    char line[128];
/*
    while(input_file.getline(line, sizeof(line), '\n')){
        cout<<line<<endl;
    }
*/

/*
vector<string> v;

    while (1) {
        v.push_back(s.substr(0, s.find(" "))); // 從第一個空白分割出左側子字串放入vector
        s = s.substr(s.find(" ") + 1, s.length()); // 從第一個空白分割出右側子字串設為s

        // 取得最後一個字。最後一個字找不到空白了
        if (s.find(" ") == -1) {
            v.push_back(s);
            break;
        }
*/


    while(input_file>>str){
        cout << str << endl;
        input1.push_back(str);
    } 

//print Matrix
    for(int i=0; i<input1.size(); i++){
        cout << input1[i] << endl;
    }

//check read to end of file
    if(input_file.eof())
        cout << "EOF" << endl;
    else
        cout << "error" << endl; 

    input_file.close();

    //output.open("file_path/filename");

    function(1000);
    return 0;
}