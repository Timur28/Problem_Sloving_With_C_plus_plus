// This program converts the interger into its binary number.
#include <iostream>
using namespace std;
int main ()
{
	int num,binaryN = 0;
	int i = 1, rem;
	cout <<"This program converts the interger into its BINARY NUMBER\n";
	cout <<"Enter a number : ";
   cin >> num;
   
   while (num != 0)
   {
      rem = num % 2;
      num /= 2;
      binaryN += rem * i;
      i *= 10;
   }

   cout << "Equivalent Binary Number: " << binaryN << endl;
   
    cout <<"Thats ALL" <<endl<<"========================================================";
    return 0;
}
