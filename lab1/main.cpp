#include <iostream>
#include <fstream>
#include "practice.h"
#include <algorithm>
#include <vector>
#include <string.h>
#include <iomanip>
using namespace std;
#define point  0
#define point_2  1

int main(int argc, char **argv){
    //declare a file name variable
    ifstream input_file;
    ofstream output_file;

    //open the file
    input_file.open(argv[1], ios::in);
    cout << input_file.is_open() << endl;
    
    //string str;
    //vector<string> input1;
    //char line[128];

/*
//store first line
    vector<string> temp;
    input_file.getline(line, sizeof(line), '\n');
    temp.push_back(line);
    for(int i =0; i<3; i++){
        cout << temp[i] << endl;
    }
*/

//delete the first line
    string temp;
    input_file>>temp>>temp>>temp;
    
    int i = 0;
	string name;
	string n[5];
	int grade[5][3];
	double stAve[5];
    
#if point
    int *gradeptr = new int [5 * 3];
    double *stAve_2;
    
#endif
	while(input_file >> name)
	{
		n[i] = name;
		input_file >> grade[i][0] >> grade[i][1] >> grade[i][2];
		i++;
	}

# if point 
    for(int k=0; k<5; k++){
        for(int j=0; j<3; j++){
            gradeptr[k*5+j] = grade[k][j];
        }
    }
#endif
   
# if point_2
	for(int r=0;r<5;r++)
	{
		stAve[r]=double((grade[r][0]+grade[r][1]+grade[r][2]))/3;
	}
#endif

#if point 
    stAve_2 = average (gradeptr);
    cout << stAve_2[0]<< " " << stAve_2[3]<<" " << stAve_2[4] <<endl;
#endif

#if point_2
	double tmp;
	string tmp2;
	for(int q=4; q>0; q--)
	{
   		for(int j=0; j<=q-1; j++)
    		{	
        		if(stAve[j] < stAve[j+1])
        		{
                    //change average
            		tmp = stAve[j];
          	 		stAve[j] = stAve[j+1];
          	 		stAve[j+1] = tmp;
                    //change name
                    tmp2 = n[j];
                    n[j] = n[j+1];
                    n[j+1] = tmp2;
        		}	
    		}	
	}	
#endif

#if point
    double tmp;
	string tmp2;
	for(int q=4; q>0; q--)
	{
   		for(int j=0; j<=q-1; j++)
    		{	
        		if(stAve_2[j] < stAve_2[j+1])
        		{
                    //change average
            		tmp = stAve_2[j];
          	 		stAve_2[j] = stAve_2[j+1];
          	 		stAve_2[j+1] = tmp;
                    //change name
                    tmp2 = n[j];
                    n[j] = n[j+1];
                    n[j+1] = tmp2;
        		}	
    		}	
	}	
#endif

#if point
    for(int i=0; i<5; i++){
        cout << "start" << endl;
        cout << stAve_2[i] << endl;
    }
#endif

	output_file.open(argv[2], ios::out);
	for(int k=0; k<5; k++)
    {
		output_file << k+1 <<"." << left << setw(11)  << n[k] << right << setw(2) << fixed 
			   << setprecision(1) << stAve[k] << endl;
	}	
#if point
    delete [] gradeptr;
    cout << "hi" << endl;
#endif

//check read to end of file
    if(input_file.eof())
        cout << "EOF" << endl;
    else
        cout << "error" << endl; 

    input_file.close();
    output_file.close();

    testfunction(1000);
    return 0;
}