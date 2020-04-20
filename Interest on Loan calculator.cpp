//task 1
// Interest calvulations
#include <iostream>
using namespace std;
int main ( )
{
	double princi_amnt, ans_r;
	float int_rate;
	int no_of_yrs;
	cout << "Wellcome\n";
	cout << "It is Interest Calculator on a loan\n";
	cout << "Enter the Principal Amount:\n";
	cin >> princi_amnt;
	cout << "Enter the Initial Intrest Rate: \n";
	cin >> int_rate;
	cout << "Enter the Number of Years: \n";
	cin >> no_of_yrs;
	ans_r = princi_amnt*int_rate*no_of_yrs / 100;
	cout << "Simple Interest=" << ans_r ;
	return 0;
	}
