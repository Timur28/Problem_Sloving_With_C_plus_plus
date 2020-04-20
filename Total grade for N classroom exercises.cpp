//A program that calculates the total grade for N classroom exercises as a percentage.

#include <iostream>
using namespace std;
int main ()
{
	int num_exs,possible_points,received_points;
double tot_poss_points=0,tot_rec_points=0;
	cout<<"This program calculates the total grade for N classroom exercises as a percentage\n";
	cout <<"How many exercises to input?";
	cin>> num_exs;
	for (int i=1;i<=num_exs;i++)
	{
		cout <<"Score received for exercise "<<i<<": ";
		cin >>received_points;
		cout <<"/nTotal points possible for exercise "<<i<<": ";
		cin >>possible_points;
		cout <<endl;
		tot_rec_points += received_points;
		tot_poss_points += possible_points;
	}
	cout <<"Your total is "<<tot_rec_points<<" out of "<<tot_poss_points<<", or ";
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout<<100*(tot_rec_points/tot_poss_points)<<"%";
	cout<< "\nThat's All" ;
	return 0;
}
