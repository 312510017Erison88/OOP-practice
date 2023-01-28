#include <iostream>
#include "overhead.h"

using namespace std;

int main()
{

	// please do not modify contents in main() 
	Complex a, b;

	cout << "input a & b" << endl;
	cin >> a >> b;
	Complex plus = a+b;
	Complex minus = a-b;
	Complex multify = a*b;
	Complex conjugate = !a;
	cout << a << " " << b << endl;
	cout << "a+b = " << plus << endl;
	cout << "a-b = " << minus << endl;
	cout << "a*b = " << multify << endl;
	cout << "conjugate of a = " << conjugate << endl;

	if(a == b)
		cout << "a is equal to b" << endl;
	if(a != b)
		cout << "a is not equal to b" << endl;


	return 0;
}