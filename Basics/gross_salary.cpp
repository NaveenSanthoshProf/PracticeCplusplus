#include <iostream>

using namespace std;
int main()
{
  int basic,x,y,gross;

  cout <<"Insert the basic pay:"<<endl;
  cin>>basic;
  x = (10*basic)/100;
  y = (12*basic)/100;
  gross = basic +x + y;
  cout << "your pay is:"<<gross<<endl;



  return 0;

}
