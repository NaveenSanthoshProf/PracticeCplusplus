#include <iostream>

using namespace std;

int main()
{
  int x;
  cout << "even or odd" <<endl;
  cout << "number?" <<endl;
  cin >> x;
  if (x%2 == 0)
  {
    cout << "even"<<endl;
  }
  else
  {
    cout << "odd" <<endl;
  }

  return 0;
}
