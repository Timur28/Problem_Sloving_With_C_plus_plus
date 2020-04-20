// An employee is paid at a rate of $16.78 per hour for the first 40 hours
//worked in a week. Any hours over that are paid at the overtime rate of oneand-one-half times that. From the worker’s gross pay, 6% is withheld for
//social security tax, 14% is withheld for federal income tax, 5% is withheld or state income tax, and $10 per week is withheld for union dues. If the
//worker has three or more dependents, then an additional $35 is withheldn
//to cover the extra cost of health insurance beyond what the employer pays//Write a program that will read in the number of hours worked in a week and the number of dependents as input and will then output the worker’s gross pay, each withholding amount, and the net take-home pay for the week.
#include <iostream>
using namespace std;
int main( )
{
	int hours;
	double gross_pay, rate,ss_tax, federal_tax, dependent_s , state_tax , union_dues ,  health_insu, net_pay;
	cout << "Enter the hourly rate of pay: $";
	cin >> rate;
	cout << "Enter the number of hours worked,\n"
	<< "rounded to a whole number of hours: ";
	cin >> hours;
	cout << "Enter the number of worker dependents: ";
	cin >> dependent_s;
	if (hours > 40)
	{
	gross_pay = rate * 40 + 1.5 * rate * (hours - 40);
	}else
	{
	gross_pay = rate * hours;
	}
	ss_tax = gross_pay/100*6;
	federal_tax = gross_pay/100*14;
	state_tax = gross_pay/100*5;
	union_dues = 10;
	if (dependent_s >2)
		{health_insu = 35;
		}
	else { health_insu = 0;
	}
	net_pay = gross_pay - ss_tax - federal_tax - union_dues - state_tax - health_insu,
	cout.setf(ios::fixed);
	cout.setf(ios::showpoint);
	cout.precision(2);
	cout << "Hours = " << hours << endl;
	cout << "Hourly pay rate = $" << rate << endl;
	cout << "Gross pay = $" << gross_pay << endl;
	cout << "Social Security Tax  = $" << ss_tax << endl;
	cout << "Federal Income Tax = $" << federal_tax << endl;
	cout << "State Income Tax = $" << state_tax << endl;
	cout << "Union Dues = $" << union_dues << endl;
	cout << "Health Insurance = $" << health_insu << endl;
	cout << "Net Pay of the Worker = $" << net_pay << endl;
	return 0;
	}
