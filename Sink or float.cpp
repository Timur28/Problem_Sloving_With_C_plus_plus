//Topic 4 Task 2
#include <iostream>
using namespace std;
int main ()
{
float y = 62.4;//Constant given
float weight, radius; 
double volume; 
double fb; //Variable Buoyant Force,



cout << "This Program will calculate the Buoyant Force of a Sphere and tells the user\n";
 cout << "weither the sphere float or sink"<<endl;
 cout <<endl;
cout<< "Please enter weight of the object in lbs: ";
cin>> weight;
cout<< "Please enter radius of the object in feet: ";

cin >> radius ;
volume=(4/3)*(3.14)*(radius*radius*radius);
fb = (volume)*(y);
cout << "The Buoyant Force is :"<<fb<<endl;
{
if (fb >= weight)
{
cout << "This Sphere will float! :) " << endl; 

}
else 
{
cout << "This Sphere will sink! :( " << endl; 
}
}

cout << "End of Testing!" << endl;

return 0; 
}

