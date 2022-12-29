#include <iostream>

using namespace std;
int main()
{
  int x,sum=0,i,z;
  cout << "adding n numbers" << endl;
  cout << "n?" << endl;
  cin >> x;
  cout << "insert:"<<endl;
  for(i=1;i<=x;i++)
  {
    cin >> z;
    sum += z;
  }
  cout << "the sum is:"<<sum<<endl;

  return 0;
}
