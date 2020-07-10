#include <iostream>
using namespace std;

int main() {
  int num;
  cin >> num;
  for(int i=0;i<num;i++)
  {
    for(int j=0;j<=i;j++)
      cout<<"*";
    cout<<"\n";
  }
  for(int i=num;i < (num * 2  - 1);i++)
  {
    for(int j=0; j< (2*num -1)-i ; j++)
      cout<<"*";
    cout<<"\n";
  }
}