#include <iostream>

using namespace std;

int main()
{
  int x,y,sum,mul,sub,div,mod;
  cout<<"math operations\n"<<endl;
  cout<<"please input 2 numbers"<<endl;
  cin >> x >>y;
  sum = x+y;
  sub=x-y;
  mul=x*y;
  div =x/y;
  mod=x%y;
  cout<<"the 5 values are:"<<sum<<"\n"<<sub<<"\n"<<mul<<"\n"<<div<<"\n"<<mod<<endl;
  return 0;
}
