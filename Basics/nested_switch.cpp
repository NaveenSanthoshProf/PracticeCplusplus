#include <iostream>

using namespace std;

int main()
{
  int x=87 , y=40;
  cout << "Nested switch case \n"<< endl;
  switch(x)
  {
    case 87:
    cout << "eighty seven" << endl;
      switch (y)
      {
        case 40:
        cout <<"forty"<<endl;
      }
    }
}
