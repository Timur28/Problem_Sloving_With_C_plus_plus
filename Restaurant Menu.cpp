#include <iostream>
using namespace std;
int main()
{
	int no_deals,answer;
	char choice;
	cout<< endl;
	cout<< "=====Food Menu=====\n";
	cout << "Chose a Option:\n";
	cout << endl;
	cout <<"Option 0:	Special Ice Cream(2 Scope) = Rs.100\n";
	cout <<"Option 1:	Special Peshawari Chapal kebab(2 Pcs) = Rs.250\n";
	cout <<"Option 2:	Peshawari Chicken Karahi(1 Kg) = Rs.1060\n";
	cout <<"Option 3:	Namkeen Dubmah Karahi(1kg) = Rs.1480\n";
	cout <<"Option 4:	Angar Muragh(Saltish Full Chicken) = Rs.930\n";
	cout <<"Option 5:	Namkeen Puth(with bone.6 pcs) = Rs.1090\n";
	cout <<"Option 6:	Namkeen Chanp(with bone.6 pcs) = Rs.1090\n";
	cout <<"Option 7:	Namkeen Chicken Tikkah(Breast.8pcs) = Rs.240\n";
	cout <<"Option 8:	Full Grilled Fish(400gm) = Rs.630\n";
	cout <<"Option 9:	Namkeen Ribs(Dumbah) = Rs.950\n";
	cout << endl;
	cout << "Enter the option number : ";
	cin >> choice;
	cout <<endl;
	cout <<"Enter the number of Deals: ";
	cin >>no_deals;
	cout <<endl;
	switch (choice)
	{
	case '0':
			cout <<"Your Deal is Special Ice Cream\n";
			cout<<"Quantity of Deal is: "<<2*no_deals<<" Scope\n";
			answer = no_deals*100;
			cout<<"Total Price is : Rs."<<answer;
		break;
	case '1':
		cout <<"Your Deal is Special Peshawari Chapal kebab\n";
			cout<<"Quantity of Deal is: "<<2*no_deals<<" Pieces\n";
			answer = no_deals*250;
			cout<<"Total Price is : Rs."<<answer;
		break;
	case '2':
		cout <<"Your Deal is Peshawari Chicken Karahi\n";
		cout<<"Quantity of Deal is: "<<1*no_deals<<" Kg\n";
		answer = no_deals*1060;
		cout<<"Total Price is : Rs."<<answer;
		break;
	case '3':
		cout <<"Your Deal is Namkeen Dubmah Karahi\n";
		cout <<"Quantity of Deal is: "<<1*no_deals<<" Kg\n";
		answer = no_deals*1480;
		cout<<"Total Price is : Rs."<<answer;
		break;
	case '4':
		cout <<"Your Deal is Angar Muragh\n";
		cout<<"Quantity of Deal is: "<<1*no_deals<<" Saltish Full Chicken\n";
		answer = no_deals*930;
			cout<<"Total Price is : Rs."<<answer;
		break;
	case '5':
			cout <<"Your Deal is Namkeen Puth\n";
		cout <<"Quantity of Deal is: "<<6*no_deals<<" Pieces\n";
		answer = no_deals*1090;
			cout<<"Total Price is : Rs."<<answer;
		break;
	case '6':
		cout <<"Your Deal is Namkeen Chanp\n";
		cout <<"Quantity of Deal is: "<<6*no_deals<<" Pieces\n";
		answer = no_deals*1090;
			cout<<"Total Price is : Rs."<<answer;
		break;
	case '7':
		cout <<"Your Deal is Namkeen Chicken Tikkah\n";
		cout <<"Quantity of Deal is: "<<8*no_deals<<" Pieces\n";
			answer = no_deals*240;
			cout<<"Total Price is : Rs."<<answer;
		break;
	case '8':
		cout <<"Your Deal is Special Full Grilled Fish\n";
		cout <<"Quantity of Deal is: "<<400*no_deals<<" Grams\n";
			answer = no_deals*630;
			cout<<"Total Price is : Rs."<<answer;
		break;
	case '9':
		cout <<"Your Deal is 	Namkeen Ribs\n";
		cout <<"Quantity of Deal is: "<<1*no_deals<<" Kg\n";
		answer = no_deals*950;
			cout<<"Total Price is : Rs."<<answer;
		break;

	default:
		cout<< "Not a valid choice.\n"
			<< "Choose again.\n";
	}
	cout <<endl;
	cout <<"====Thanks For Visiting Us====\n";
	return 0;	
} 
