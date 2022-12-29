#include <iostream>
using namespace std;
int main()
{
  float base , height,area;
  cout  << "area of triangle"<<endl;
  cout<<"height?"<<endl;
  cin >> height;
  cout<<"base?"<<endl;
  cin >> base;

  area = 0.5*(base)*(height);

  cout << "the area :" << area<<endl;
  return 0;
}
