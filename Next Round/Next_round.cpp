#include <iostream>
using namespace std ;
 
int main()
{
	int n, k, i ;
    int count = 0;
	cin>>n>>k;
	int array[n];
	cout<<endl;
 
	for(i = 0 ; i<n ; i++)
	{
		cin>>array[i];
	}
	for(i = 0 ; i<n ; i++)
	{
		if(array[i]>0 && array[i]>=array[k-1])
		{
		    count++;
		}
		
	}
   
	cout<<count;
	return 0;
} 