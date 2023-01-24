#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;
void deleteRepeats(char *arr, int &size);
void Printarr(char *arr, int &size);

int main(int argc, char **argv){
    ifstream inputstream;
	ofstream outputstream;
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
	deleteRepeats(arr, size);
	Printarr(arr, size);
	outputstream.open(argv[2], ios::out);
	for(int i=0; i<size; i++){
		outputstream << *(arr+i) << " " ;
	}
	
    inputstream.close();
	outputstream.close();
	delete [] arr;
	arr = NULL;
    return 0;
}

void deleteRepeats(char *arr, int &size){
	for(int i=0; i<size; i++){
		for(int j=i+1; j<size; j++){
			if (arr[i]==arr[j]){
				for(int k=j; k<size-1; k++){
					arr[k] = arr[k+1];
				}
				j--;
				size--;
			}
		}
	}
}

void Printarr(char *arr, int &size){
	for(int i=0; i<size; i++){
		cout << *(arr+i) << " ";
	}
	cout << endl;
}