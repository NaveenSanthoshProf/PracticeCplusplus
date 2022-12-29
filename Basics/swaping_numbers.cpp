#include <iostream>
using namespace std;
int main()
{
  int x,y,z;
  int temp1,temp2;
  cout<<"enter the first number"<<endl;
  cin>>x;
  cout<<"enter the second number"<<endl;
  cin>>y;
  cout<<"enter the third number"<<endl;
  cin>>z;

  cout << "before swaping:"<< x<< y<< z<<endl;

  temp1 = x;
  temp2 = y;
  x=z;
  y=temp1;
  z=temp2;
  cout << "after swaping:"<< x <<y <<z<<endl;

  return 0;
}
