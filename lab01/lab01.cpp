// lab01.cpp: определяет точку входа для консольного приложения.
//

#include "stdafx.h"
#include "math.h"
#include <string>
#include <iostream>
using namespace std;
int main()
{
	float a=2.61f, b=3.43f, x=5.54f;
	double y = pow(a, pow(2 + x, 1.0 / 4)) + exp( b*log(2 * x))*cos(a*x);
	cout << "First result is:"<< y << endl;
	string rep;
	do
	{ 
			cout << ("Enter a,b,x") << endl;
			cin >> a;
			cin >> b;
			cin >> x;
			y = pow(a, pow(2 - x, 1.0 / 4)) + exp(b*log(2 * x))*cos(a*x);
			cout << endl << y << endl;
			cout << ("say yes or no") << endl;
			cin >> rep;

		
	} while (rep == "yes");
    return 0;
}

