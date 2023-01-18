#include <iostream>
#include <vector>
#include "practice.h"
#include <string.h>
using namespace std;

void testfunction (int function_parameter){
    cout << function_parameter << endl;
}

double* average (int **grade){
    double *stAve;
    for(int i=0; i<5; i++)
	{
		*stAve = double((grade[i][0]+grade[i][1]+grade[i][2]))/3; 
	}
    return stAve;
}

    
