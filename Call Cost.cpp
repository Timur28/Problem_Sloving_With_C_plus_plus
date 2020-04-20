#include<iostream>
#include<string>
#include<iomanip>
using namespace std;
int main ()
{
	int minutes, startTime;
	char ch;
	string Day; 
	double cost, rate;
	cout << fixed << showpoint << setprecision (2); 
	do
	{
		cout << "Enter start time of the call(For example, 2:30 = 2330): ";
		cin >> startTime;
		while(startTime < 0 || startTime >= 2400)
		{
			cout << "\nInvalid time.";
			cout << "Enter start time of the call(For example, 2:30 = 2330): ";
			cin >> startTime;
		}
		cout << "Enter length of the call in minutes: ";
		cin >> minutes;
		cout << "Enter the day of the week: ";
		cin >> Day;
		if(Day == "monday"|| Day == "MONDAY" || Day == "tuesday" || Day == "TUESDAY"  || Day =="wednesday" || Day == "WEDNESDAY"  || Day =="THURSDAY" || Day == "thursday" || Day == "friday" || Day =="FRIDAY")
		{ 
			if (startTime >= 800 && startTime <= 1800) 
				rate = 0.4; 
			else 
				rate = 0.25;
			cost = minutes * rate;
			cout << "\nRate for the call was " << "$"
 << rate << " a minute"<< endl
				<< "Your total cost: " << "$" 
<< cost << endl;
		}
		else if(Day =="saturday" || Day =="SATURDAY" || Day =="sunday" || Day =="SUNDAY")
		{
			rate = 0.15;
			cost = minutes * rate;
			cout << "\Rate for the call was " << "$"
 << rate << " a minute"<< endl
				<< "Your total cost: " << "$" << cost;
		}
		else
			cout << "\nInvalid.";
		cout << endl << "\nWould you like to calculate your bill again? (y/n): ";
		cin >> ch;
		cout << endl << endl;

	}
	while( ch =='Y' || ch == 'y');
	cout << "\nEnd of Program\n\n"; 
	return 0;
}
