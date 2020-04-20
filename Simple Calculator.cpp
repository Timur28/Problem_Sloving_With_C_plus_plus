#include <iostream>
using namespace std;
int main( )
{
	int num_A , num_B;
	char choice;
	double answer;
	cout <<"This is a simple calculator in which user input two numbers A & B and choose a operator\n";
	cout << endl;
	cout <<"Enter two Numbers A and B \n"<<"A = ";
	cin >> num_A;
	cout <<"B = ";
	cin >> num_B;
	cout<<endl;
	cout <<"Please Choose your option:\n" ;
	cout <<"Option 0>>		A + B		(Addition)\n";
	cout <<"Option 1>>		A - B		(Subtracion)\n";
	cout <<"Option 2>>		A * B		(Product)\n";
	cout <<"Option 3>>		A / B		(Devision)\n";
	cout <<"Option 4>>		A % B		(Remainder)\n";
	cout <<"Option 5>>		A * A		(Square of A)\n";
	cout <<"Option 6>>		B * B		(Sqare of B)\n";
	cout <<"Option 7>>		A++ 		(Increment of A)\n";
	cout <<"Option 8>>		A-- 		(Decrement of A)\n";
	cout <<"Option 9>>		B / A		(Devison)\n";
	cout <<endl;
	cout << "Enter the Option number: ";
	cin >> choice;
	switch (choice)
	{
	case '0':
			answer = num_A + num_B;
			cout <<"A + B = "<<answer<<endl;
		break;
	case '1':
			answer = num_A - num_B;
			cout <<"A - B = "<<answer;
		break;
	case '2':
		answer = num_A * num_B;
			cout <<"A * B = "<<answer;
		break;
	case '3':
			answer = num_A / num_B;
			cout <<"A / B = "<<answer;
		break;
	case '4':
			answer = num_A % num_B;
			cout <<"A % B = "<<answer;
		break;
	case '5':
			answer = num_A * num_A;
			cout <<"Square of A = "<<answer;
		break;
	case '6':
			answer = num_B * num_B;
			cout <<"Square of B = "<<answer;
		break;
	case '7':
			answer = num_A++;
			cout <<"Increment of A = "<<answer;
		break;
	case '8':
				answer = num_A++;
			cout <<"Decrement of A = "<<answer;
		break;
	case '9':
			answer = num_B / num_A;
			cout <<"B / A = "<<answer;
		break;

	default:
		cout<< "Not a valid choice.\n"
			<< "Choose again.\n";
	}
	cout <<endl;
	cout<<"========That's your calculation=========";
	return 0;
}
