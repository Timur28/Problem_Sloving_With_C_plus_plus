// a computer program to calculate and display the total cost of\
 parcel depending on the weight and delivery location of the parcel.
#include <iostream>
using namespace std;
int main ()
{
	int weight,cost;
	string location;
	cout <<"Wellcome to Pakistan Pacel Agencey Lahore limited\n";
	cout <<"This program calculates the cost of parcel\n"<<endl
	<<"Rate:\n"<<"Stamp of $2 per Kilogram plus $20 delivery charges\
within Lahore city or $40 for \ndelivery anywhere else in the country.\n" ;
	cout <<"Enter the weight of Parcel(kg) rounded off to the whole number : ";
	cin>>weight;
	cout <<"Enter the Delivery Location : ";
	cin>>location;
	if (location=="lahore"||location=="Lahore")
	{
		cost = (2*weight)+20;
	}
	else 
	{
		cost = (2*weight)+40;
	}
	cout <<endl<<"The cost of Parcel is $"<<cost<<"\n"<<endl;
	cout <<"==========THANKS OF VISITING US==========";
	return 0;
}
