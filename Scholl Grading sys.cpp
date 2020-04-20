 #include <iostream>
using namespace std;
int main( )
{
	int total_marks;
	double obt_marks,percentage;
	cout << "Enter the Total Marks:";
	cin >> total_marks;
	cout<<endl;
	cout << "Enter the Obtained Marks:";
	cin >> obt_marks;
	percentage = obt_marks/total_marks*100;
	cout << "Your Precentage is = " << percentage<< "%"<<endl;

	
	if (percentage >= 85)
	{	
		cout << " Your Grade = A\n";
		cout << "Teacher Remarks = Excellent. Work more to sustain it.\n";
	}
	if ((percentage <85 )&&(percentage >= 65) )
	{
		cout << " Your Grade = B\n";
		cout << "Teacher Remarks = Very good. Keep it Up and Study Hard";
	}
	if ((percentage <65 )&&(percentage >= 45) )
	{
		cout << " Your Grade = C\n";
		cout << "Teacher Remarks = Passing. But work hard\n";
	}
	if ((percentage <45 )&&(percentage >= 34) )
	{
		cout << " Your Grade = D\n";
		cout << "Teacher Remarks = Not good. Go study.\n";
	}
	if ((percentage <33)&&(percentage > 0))
	{
		cout << " Your Grade = F\n";
		cout << "Teacher Remarks = You are Fail. Go study and Try Again.\n";
	}

	cout << "Okay, Good Buye\n";
	return 0;
}
