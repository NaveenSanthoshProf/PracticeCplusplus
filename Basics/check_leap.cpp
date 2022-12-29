#include <iostream>
using namespace std;
int main()
{
  int year;


  cout << "program to check leap year"<<endl;
  cout << "input the year to be checked:"<<endl;
  cin >> year;

  if (year % 4 == 0 )
  {
    cout << "leap mafafi"<<year<<endl;
  }
  else
  {
    cout << "loser"<<endl;
  }
  return 0;
}
