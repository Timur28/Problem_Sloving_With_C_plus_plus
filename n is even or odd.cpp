//taask 2
//topic 3 IF then else
#include <iostream>
using namespace std;
int main( )
{
int user_input,x;
cout << "This program tell you wheather the given number is even or odd\n ";
cout << "Enter a Number:";
cin >> user_input;
x = user_input/2;
x = user_input%2;
if (x == 0)
{
cout << "The given number is an Even Number ";
}
else
{cout <<"The given number is an Odd Number";
}
cout << endl;
cout << "That's all! Stay Blessed\n";
return 0;
}

