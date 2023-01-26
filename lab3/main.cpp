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
    int alnum = 0;  //number of rows
    string alpha;

    while(getline(inputstream, alpha)){
        alnum++;
    }
    inputstream.close();

    inputstream.open(argv[1], ios::in);
    if(inputstream.fail()){
        cout << "Input file is filed." << endl;
    }

    int RecNum = 0;
    int TriNum = 0;
    string name;
    int nameflag = 0;
    string n[alnum];      // store the name
    int **data = new int* [alnum];   // each row has one name one length one width
    for(int i=0; i<alnum; i++){
        data[i] = new int[2];
    }

    while(inputstream >> name){
        n[nameflag] = name;
        inputstream >> data[nameflag][0] >> data[nameflag][1];
        if(name=="Rectangle"){
            RecNum++;
        }
        if(name=="Triangle"){
            TriNum++;
        }
        nameflag++;
    }
    inputstream.close();

    NamePrint(n, alnum);
    DataPrint(data, alnum, 2);

    int size = alnum;
    int area_R[RecNum];
    int area_T[TriNum];
    int c = 0 , d = 0;
    for(int i=0; i<size; i++){
        if(n[i] == "Rectangle")
        {
           Rectangle InputData1(data[i][0], data[i][1]);
           area_R[c] = InputData1.calculate_area();
           c++;
        }
        else if(n[i] == "Triangle")
        {
           Triangle InputLength2(data[i][0], data[i][1] );
           area_T[d] = InputLength2.calculate_area();
           d++;
        }
	}

    //delete the dynamic array
    for(int i=0; i<size; i++){
        delete [] data[i];
    }
    delete [] data;
    data = NULL;
    
    //output file
    ofstream outputstream;
    outputstream.open(argv[2], ios::out);
    outputstream << "Rectangle area:" << endl;
    for(int j = 0; j<RecNum; j++){
    	outputstream << area_R[j] <<"  ";
	}
	outputstream << endl;
	outputstream << "Triangle area:" << endl;
	for(int k = 0; k<TriNum; k++){
	    outputstream << area_T[k] <<"  ";
	}
    outputstream << endl;

    return 0;
}