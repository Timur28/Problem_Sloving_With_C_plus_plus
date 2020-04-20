#include <iostream>
using namespace std;
int main( )
{
	int x,y,z,dividened,remainder,quotient,divisor;
	cout << "Enter Value of x:";
	cin >> x;
	cout << endl;
	cout<< "enter the value of y:";
	cin >> y;
	cout << endl;
	z = x/y;
	dividened = x;
	divisor = y;

	quotient = x/y;
	remainder = x%y;
	cout <<"Dividened is " <<dividened<<endl<<"Divisor "<<divisor<<endl<<"Quotient is "<<quotient<<endl<<"remainder is "<<remainder<<endl;
	return 0;
	
}
