#include <iostream>
using namespace std;
int main()
{
  cout<<"finding the greatest number"<<endl;
  int x,y,z;
  cout<<"enter the 1 number to be evaluated:"<<endl;
  cin >> x;
  cout<<"enter the 2 number to be evaluated:"<<endl;
  cin >> y;
  cout<<"enter the 3 number to be evaluated:"<<endl;
  cin >> z;

  if ( x>=y && x>=z)
  {
    cout<<x<<"is the largest"<<endl;
  }
  if ( y>=z && y>=x)
  {
    cout<<y<<"is the largest"<<endl;
  }
  if ( z>=y && z>=z)
  {
    cout<<z<<"is the largest"<<endl;
  }
  return 0;
}
