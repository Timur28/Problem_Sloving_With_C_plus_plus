//2Task5
//This program will calculate the GPA of students by percentage.

#include <iostream>
using namespace std;
int main( )
{
	double percentage,gpa;
	cout << "This program will calculate the GPA by percentage.\n";
	cout << "Enter your Percentage:\n";
	cin >> percentage;
	gpa = percentage/100*4;
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "Your GPA is \n" <<gpa;
	return 0;
	
}
