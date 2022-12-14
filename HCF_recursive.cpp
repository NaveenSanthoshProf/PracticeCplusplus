#include <iostream>
using namespace std;

int HCF(int x,int y)
{
  if (y!=0)
    return HCF(y,x%y);
  else
    return x;
}

int main()
{
  int x,y;

  cout << "calculating hcf using recursive"<<endl;
  cout << "enter the 2 numbers:"<<endl;
  cin>>x>>y;

  cout << "the HCF is "<< HCF(x,y)<<endl; 


  return 0;
}
