#include <iostream>
using namespace std;
int main( )
{
	double distance, speed;
	int user_value;
	double hour_s;
	int minuts_in_seconds, remaining_seconds, minut_s;
	int pre_seconds, final_seconds;
	cout << "This program will calculate the total time taken to cover the given distance.\n";
	cout <<"Enter the Total distance:\n";
	cin >> distance;
	cout << "Enter the Average Speed:\n";
	cin >> speed;
	cout << endl;
	user_value = (distance/speed)*3600;
	hour_s = user_value/3600 ;
	minuts_in_seconds = hour_s * 3600 ;
	remaining_seconds = user_value-minuts_in_seconds;
	minut_s = remaining_seconds / 60;
	pre_seconds=minut_s*60;
	final_seconds=remaining_seconds-pre_seconds;
	cout << hour_s <<"Hours " << minut_s << "Minuts " << final_seconds << "Seconds";
	cout << endl;
	return 0;
}

