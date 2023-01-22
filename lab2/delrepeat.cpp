#include <iostream>
#include <vector>
#include <fstream>
#include <string.h>

using namespace std;

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

 	inputstream.close();
    int size = i;
    cout << size << endl;

    cout << "hi" << endl;
    return 0;
}