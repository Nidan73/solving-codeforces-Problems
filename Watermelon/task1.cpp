#include<iostream>

using namespace std ;

void even_odd( int a)
{
  if ( a==2 || a%2 !=0)
    {
    cout<< "No"<<endl;
    }
  else
    {
    cout<< "YES"<<endl;
    }
}
int main(){

  int x;
  cin>>x;
  cout<<endl;
  even_odd(x);
}
