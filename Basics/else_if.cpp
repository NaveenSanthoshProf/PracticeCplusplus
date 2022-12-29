#include <iostream>

using namespace std;

int main()
{
  int grade;
  cout << "else-if statement " << endl;
  cout << "Insert student's marks :" << endl;
  cin >> grade;

  if(grade >100)
  {
    cout << "wrong marks"<<endl;
  }
  else if(grade >= 80)
  {
    cout << "S grade"<<endl;
  }
  else if(grade >= 60)
  {
    cout << "A grade"<<endl;
  }
  else if(grade >= 40)
  {
    cout << "B grade"<<endl;
  }
  else if(grade < 40)
  {
    cout << "D grade"<<endl;
  }

}
