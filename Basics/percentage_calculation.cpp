#include <iostream>
using namespace std;
int main()
{
  int sum,s1,s2,s3,s4,s5,s6,s7,total=700;
  float per;
  cout << "calculation of percentage"<<endl;
  cout << "insert marks:"<<endl;
  cin>>s1>>s2>>s3>>s4>>s5>>s6>>s7;
  sum = s1+s2+s3+s4+s5+s6+s7;
  cout << "the sum of marks are:"<<sum<<endl;
  per = (sum * 100)/total;
  cout << "the perc of marks are:"<<per<<"%"<<endl;



  return 0;



}
