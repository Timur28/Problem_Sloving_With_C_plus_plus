#include <iostream>
using namespace std;
int main ()
{
	double r,n,diff;
	double guess = n/2;
	cout <<"This program calculates the Square Root of a postive Number\n";
	cout << "Enter the number : ";
	cin>>n;
	

	for (int m; m<=5;m++)
	{
	;
		r = n/guess;
		guess = (guess +r)/2;
	
		
	}
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout <<"\nThe root of "<<n << "is approximately " <<r<<endl;
	cout <<"\nThat's ALL"<<endl<<"\n======================================";
	return 0;
}
