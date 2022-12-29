#include <iostream>
using namespace std;
int main()
{
  int si,amt;
  float rate,period;
  cout <<" simple interest calculation \n"<<endl;

  cout <<" enter the amount to be deposited"<<endl;
  cin >> amt;
  cout <<" enter the rate of interest"<<endl;
  cin >> rate;
  cout <<" enter the period of interest"<<endl;
  cin >> period;


  si = ((amt * rate)/100)*period;

  cout << "your interest"<<si<<endl;
  cout << "your total amout is"<<si+amt<<endl;

  return 0;



}
