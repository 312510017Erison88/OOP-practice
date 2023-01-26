#include <iostream>
#include <string.h>
#include "calculate_area.h"

using namespace std;

int Rectangle::calculate_area(){
    return width*height;
}

Rectangle::~Rectangle(){}

int Triangle::calculate_area(){
    return (width*height)/2;
}

Triangle::~Triangle(){}

void NamePrint(string *n, int size){
    for(int i=0; i<size; i++){
        cout << n[i] << endl;
    }
}

void DataPrint(int **data, int rowsize, int colsize){
    for(int i=0; i<rowsize; i++){
        for(int j=0; j<colsize; j++){
            cout << data[i][j] << endl;
        }
    }
}