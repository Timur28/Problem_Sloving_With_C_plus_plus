// This program calculate teh sum of the series:1+1/2+1/3+1/4+1/5........+1/45
#include <iostream>
using namespace std;
int main ()
{
	int n;
	double sum=0 ;
	cout <<"This program calculate the sum of the series : 1+1/2+1/3+1/4+1/5........+1/n\n";
	cout <<"Enter the Value of n : ";
	cin>> n;
	for (double x=1;x<=n;x++)
	{
		sum = sum+1/x;
	}
	cout <<"The sum of the series = "<<sum<<endl;
	cout <<"That's All\n";
	return 0;
	
}

