#include <iostream>

using namespace std;

int main()
{
  char string[200];
  cout <<"string input \n"<<endl;
  cout <<"enter something"<<endl;
  cin.getline(string,200);

  cout<<"you have entered :"<<string<<endl;

  return 0;
}
