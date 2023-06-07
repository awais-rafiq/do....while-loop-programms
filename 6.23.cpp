#include<iostream>
using namespace std;
int main()
{
  long int n,num,digit,rev=0;
  cout<<"enter the number";
  cin>>num;
  n=num;
  do
  {
  digit=num%10;
  rev=(rev*10)+digit;
  num=num/10;
  }
  while(num!=0);
  cout<<"the reverse of a number  is "<<rev<<endl;
  if(n==rev)
  cout<<"num is palandrome ";
  else
  cout<<"num is not palindrome";
}
