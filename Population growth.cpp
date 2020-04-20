//Write a program that prompts the user to enter the\
population and growth rate of each town. The program outputs after how many years the population of\
town A will be greater than or equal to the population of town B and the populations of both the towns\
at that time. 
#include <iostream>

using namespace std;

int main()
{
    int pA, pB, year = 1; 
    double rA,rB; 

    cout << "Enter the population of Town A: ";
    cin >> pA ;
    cout << "Enter the growth rate of Town A: ";
	cin>> rA;
	 cout << endl;
    cout << "Enter the population of Town B: ";
    cin >> pB;
    cout << "Enter the growth rate of Town B: ";
	cin>>rB;
	 cout << endl;
    if (pA < pB && rA > rB)
    {
        {   
        for(year;pA<pB;year++) 
			{
                (pA = ((rA / 100) * pA) + pA); 
                (pB = ((rB / 100) * pB) + pB);
                
            }
        cout << "Town A will surpass Town B in population after " << year << " years.\n" << endl;
        cout << "The final population of Town A  is: " << pA << ".\n" << endl;
        cout << "The final population of Town B is: " << pB << ".\n" << endl;
        }
    }
    else
    {
        cout << "Invalid Data.";
    }
    cout <<"That's All"<<endl<<"========================";
    return 0;
}
