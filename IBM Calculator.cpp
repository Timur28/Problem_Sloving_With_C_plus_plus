//task3 
//C++ Baiscis
#include <iostream>
using namespace std;
int main( )
{
	double height_in_feet, add_inches,rema_inches, rema_feet, answer_s;
	cout << "It is program to claculate IBM in pounds\n";
	cout << "Enter your hight in feet section and addintional inches in inches\n";
	cout << "The minimum hight for this program is 5 feet\n";
	cout <<"Height in Feet";
	cin >> height_in_feet;
	cout << "Aditional inches";
	cin >> add_inches;
	rema_feet = height_in_feet-5;
	rema_inches=rema_feet*12;
	answer_s=110+(rema_inches*5)+(add_inches*5);
	cout <<"Your IBM is" <<answer_s << " pounds";
	return 0;
	}
