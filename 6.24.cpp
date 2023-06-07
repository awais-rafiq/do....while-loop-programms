#include<iostream>
using namespace std;
int main()
{
  int c,s,e;
  cout<<"enter the starting number";
  cin>>s;
  cout<<"enter the ending number";
  cin>>e;
  c=s;
  do
  {
   if(c%2!=0)
   cout<<c<<endl;
   c++;
  }
  while(c<=e);
}
