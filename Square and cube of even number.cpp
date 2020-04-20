//a program to calculate the square and cube of first ten even numbers.
#include <iostream>
using namespace std;
int main ()
{
	int n;
	cout<<"This program calculates the square and cube of first ten even numbers.\n";
	
	for (n=2;n<=20;n+=2)
	{
		cout<<"The Saquare of "<<n<<" is "<<n*n<<" and the Cube of "
			<<n<<" is "<<n*n*n<<endl;
	}
	cout << "That's All";
	return 0;
}
