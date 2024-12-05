/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
using namespace std ;


string removeDuplicates(const string& str) {
	string result = "";

	for (char ch : str) {
		if (result.find(ch) == string::npos) {
			result += ch;
		}
	}

	return result;
}

int main()
{

	string input;
	getline(cin, input);
	string result = removeDuplicates(input);
	int n = result.size();

	if( n%2 == 0)
	{
		cout<<"CHAT WITH HER!" ;
	}
	else
	{
		cout<<"IGNORE HIM!" ;
	}
	return 0;
}