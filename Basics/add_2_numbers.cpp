#include <iostream>

using namespace std;

int main()
{
  int x,y,sum=0;
  cout<<"insert numbers:"<<endl;
  cin>>x;
  do
  {
      y=x%10;
      sum = sum+y;
      x= x/10;

  }while(x!=0);
  cout<<"result is:"<<sum<<endl;
  return 0;
}
