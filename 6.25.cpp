#include<iostream>
using namespace std;
int main()
{
  int x,y,z,max,lcm;
  cout<<"enter the numbers.";
  cin>>x>>y;
  if(x>=y)
  max=x;
  else
  max=y;
  do
  {
   if(max%x==0 && max%y==0)
   {
   	lcm=max;
   	break;
   }
   else
   max++;
  }
  while(1);
  cout<<"lcm is"<<lcm;
}
