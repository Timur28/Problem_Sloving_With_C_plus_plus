// This program finds the factorial of the interger
#include <iostream>
using namespace std;
int main ()
{
	int num,factorial=1;
	cout <<"This program finds the factorial of the interger\n";
	cout <<"Enter an integer : ";
    cin >> num;

  for (int x=1;x<=num;x++)
   {
   	factorial*=x; 
     
   }

   cout << "The factorila of " <<num<<" is "<<factorial<<endl;
   
    cout <<"Thats ALL" <<endl<<"========================================================";
    return 0;
}
