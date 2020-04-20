#include <iostream>
#include<string>
using namespace std;
int main ()
{	string choice;
do
{

	int no_of_days, initial_size;
	cout <<"Enter the initial size of green crud population in pounds : ";
	cin>>initial_size;
	cout <<"\nEnter the day number you want to calculate the size after : ";
	cin>>no_of_days;
	cout<<endl;
	int day_count= no_of_days/5;
	int f1=initial_size,f2=initial_size,f=initial_size;
	
	for (int i=2;(i<=day_count&&day_count>1);i++)
	{
		f=f1+f2;
		f1=f2;
		f2=f;
	}
	cout <<"\nThe new size of populationn is "<<f<<" pounds";
	cout<<"\nDo you want to calculate again:\n"
	<<"For yes enter 'y' and For no enter 'N'\n" ;
	cin>>choice;
	}
	while (choice == "y"||choice == "Y" );
	cout<<"That's All";
	return 0;
	}
