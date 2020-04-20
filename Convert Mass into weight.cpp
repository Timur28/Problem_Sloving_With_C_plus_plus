#include <iostream>
using namespace std;
int main( )
{
char ans;
do
{
double mass_of_car,weight_of_car;
char user_choice;
cout << "This program calculate the weight of a car on either Earth or Moon by given Mass "<<endl;
cout << "Enter mass of the Car in kg:  ";
cin >> mass_of_car;
cout<< "Where you want to calculate the mass of the Car\n"
<< "Press e for on the Earth, m for on the Moon\n" << "Then press return" <<endl;
cin >> user_choice;

if ((user_choice == 'e') || (user_choice == 'E'))
{
weight_of_car = mass_of_car * 9.81;
cout << "The weight of car on the Earth is " <<weight_of_car<<" N\n";
}
else
{
weight_of_car = mass_of_car * 9.81/6;
cout << "The weight of car on the Moon is " <<weight_of_car<<" N\n";
}
cout <<endl;
cout << "Do you want to another new values?\n"
<< "Press y for yes, n for no,\n"
<< "and then press return: ";
cin >> ans;
} while (ans == 'y' || ans == 'Y');
cout << endl;
cout << "Good-Bye\n";
return 0;
}
