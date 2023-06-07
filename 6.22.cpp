//#include<iostream>
//using namespace std;
//int main()
//{
//  int n1,n2;
//  char op;
//  cout<<"enter the first number";
//  cin>>n1;
//  cout<<"enter the second number";
//  cin>>n2;
//  do
//  {
//  cout<<"the product of the numbers."<<n1*n2<<endl;
//  cout<<"do you want to continue.?(y/n)"<<endl;
//  cin>>op;
//  }
//  while(op!='n');
//  cout<<"press any key to exit";
//}


#include<iostream>
using namespace std;
int main()
{
  int n1,n2;
  char op;
  do
  {

  cout<<"enter the first number";
  cin>>n1;
  cout<<"enter the second number";
  cin>>n2;
  cout<<"the product of the numbers."<<n1*n2<<endl;
  cout<<"do you want to continue.?(y/n)"<<endl;
  cin>>op;
  }
  while(op!='n');
  cout<<"press any key to exit";
}
