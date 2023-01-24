#include <iostream>
#include <vector>
#include <fstream>
#include <string.h>

using namespace std;
void deleteRepeats(char *arr, int &size);
void Printarr(char *arr, int &size);

int main(int argc, char **argv){
    ifstream inputstream;
	inputstream.open(argv[1],ios::in); 
	
	if(inputstream.fail()){
		cout << "Input file is failed.";
	}
 
 	int i=0;
    char alpha;
	while(inputstream >> alpha){
		i++;
	}
    int size = i;
    cout << size << endl;
	inputstream.close();

	inputstream.open(argv[1], ios::in);
	if(inputstream.fail()){
		cout << "Input_2 file is failed.";
	}

	char *arr = new char[size];
	for(int i=0; inputstream >> alpha; i++){
		*(arr+i) = alpha;
	}
	Printarr(arr, size);

    inputstream.close();
	delete [] arr;
    return 0;
}

void deleteRepeats(char *arr, int &size){
	cout << "test" << endl;
}

void Printarr(char *arr, int &size){
	for(int i=0; i<size; i++){
		cout << *(arr+i) << " ";
	}
	cout << endl;
}