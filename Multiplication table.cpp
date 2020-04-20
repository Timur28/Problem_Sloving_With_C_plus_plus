#include <iostream>
using namespace std;
int main ()
{
	int n,z,m;
	cout << "This program show the multiplication table of a number n\n"
		<<"to its mth multiple.\n"
		<< "ENTER THE VALUE OF N : ";
	cin>> n;
	cout<< "ENTER THE VALUE OF M: ";
	cin >> m;
	cout<<endl;
	
	for(z=1;z<=m; z++)
	{
		cout <<n<<" * "<<z<<" = "<<n*z<<"\n";
	}
	
	cout <<endl
	<< "Thats all\n"
	<<"============================================================================";
	return 0;
}
