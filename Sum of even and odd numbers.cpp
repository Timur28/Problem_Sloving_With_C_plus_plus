// a program to calculate the sum of the first 10 odd numbers and first 10 even numbers.
#include <iostream>
using namespace std;
int main ()
{
	int n,x=0,y=0;
	cout << "This program calculates the sum of the first 10 odd numbers and first 10 even numbers.\n";
	for ( n=1 ;n<=20;n++)
	{
		if ((n%2 != 0))
		{x += n;
		}
		else { y += n;
		}
		
	}
	cout <<"The sum of first 10 odd Numbers : "<<x<<endl;
	
	cout <<"The sum of fisrt 10 even Numbers : "<<y<<endl;

	cout<<"That's All.\n"
	<<"==========================================";

	return 0;
}    
