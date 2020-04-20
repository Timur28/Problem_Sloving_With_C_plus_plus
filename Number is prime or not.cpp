// A program to calculate whether the number entered is prime or not.
#include <iostream>
using namespace std;
int main() 
{
   int n, i, logic = 0;
   cout <<"This program calculates whether the number entered is prime or not.\n";
   cout <<"Enter a postive integer : ";
   cin>> n;
   for(i=2; i<=n/2; ++i) 
   {
      if(n%i==0) 
	  {
         logic=1;
         break;
      }
   }
   if (logic==0)
     {
     	 cout<<n<<" is a Prime Number";
	 }
   else
    {
    	cout<<n<<" is not a Prime Number";
	}
	cout<<endl<<"That's All";
      
   return 0;
}
