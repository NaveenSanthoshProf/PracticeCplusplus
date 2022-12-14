#include <iostream>
using namespace std;
int main()
{
  char grade;
  cout << "please insert the grade" << endl;
  std::cin >> grade;
  switch(grade)
  {
    case 'A':
    cout << "BEstu"<<endl;
    break;
    case 'B':
    cout << "okay"<<endl;
    break;
    case 'C':
    cout << "edho"<<endl;
    break;
    case 'D':
    cout << "worstu"<<endl;
    break;
    case 'e':
    cout << "FAILu"<<endl;
    break;
  }
  return 0;
}
