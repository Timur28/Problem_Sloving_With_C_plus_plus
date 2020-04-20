//Task 1
// Basic C++ Program
#include <iostream>
using namespace std;
int main ( )
{
	double weight_kg, height_meter;
	double answer_s;
	cout << "It is BMI Calculator\n";
	cout << "Enter your weight in KG\n";
	cin >> weight_kg;
	cout << "Enter your height in meters\n";
	cin >> height_meter;

	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);

	answer_s = weight_kg / (height_meter*height_meter);
	cout << "Your BMI = "<< answer_s;
	return 0;
}
