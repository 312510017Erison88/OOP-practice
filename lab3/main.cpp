#include <iostream>
#include <string.h>
#include <fstream>
#include "calculate_area.h"

using namespace std;

int main(int argc, char **argv){
    //input file
    ifstream inputstream;
    inputstream.open(argv[1], ios::in);
    if(inputstream.fail()){
        cout << "Input file is filed." << endl;
    }
    //input name width height


    cout << "test!" << endl;
    return 0;
}