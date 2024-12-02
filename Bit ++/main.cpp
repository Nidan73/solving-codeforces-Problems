
#include <iostream>
using namespace std ;
int main()
{
	int x = 0, n ;
	string type ;
	cin>>n;
	cin.ignore();

	string x1 = "x++" ;
	string x2 = "++x" ;
	string x3 = "x--" ;
	string x4 = "--x" ;
	string x5 = "X++" ;
	string x6 = "++X" ;
	string x7 = "X--" ;
	string x8 = "--X" ;

	for( int i = 0 ; i < n ; i++)
	{
		getline(cin, type);

		if( type == "x++" || type == x2 || type == x5 || type == x6)
		{
			x = x+1;
		}
		else if( type == x3 || type == x4 || type == x7 || type == x8)
		{
			x = x-1;
		}

	}

	cout<<x;

	return 0;
}
