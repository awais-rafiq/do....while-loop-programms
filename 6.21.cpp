#include<iostream>
using namespace std;
int main()
{
  int n1,n2;
  int c,r;
  cout<<"enter the first number";
  cin>>n1;
  cout<<"enter the second number";
  cin>>n2;
  c=1;
  r=1;
  do
  {
  	r=r*n1;
  	c=c+1;
  }
  while(c<=n2);
  cout<<"result is"<<r;
}
