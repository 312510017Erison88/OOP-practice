#include <iostream>
#include <vector>
#include "practice.h"
#include <string.h>
using namespace std;

void testfunction (int function_parameter){
    cout << function_parameter << endl;
}

double* average (int *grade){
    double *stAve;
    for(int i=0; i<5; i++)
	{
		*(stAve+i) = double((grade[i*5]+grade[i*5+1]+grade[i*5+2]))/3;
        cout << grade[i*5]<<" "<<grade[i*5+1]<<" "<<grade[i*5+2]<< endl;
        cout << stAve[i] << endl;
	}

    return stAve;
}

    
