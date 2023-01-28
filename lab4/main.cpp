#include <iostream>
#include "overhead.h"

using namespace std;

int main()
{

	// please do not modify contents in main() 
	Complex a, b;

	cout << "input a & b" << endl;
	cin >> a >> b;
	cout << "a+b            = " << a+b << endl;
	cout << "a-b            = " << a-b << endl;
	cout << "a*b            = " << a*b << endl;
	cout << "conjugate of a = " << !a << endl;

	if(a == b)
		cout << "a is equal to b" << endl;
	if(a != b)
		cout << "a is not equal to b" << endl;


	return 0;
}