#include <iostream>
using namespace std; 

int main() {
  int burger[3], drink[2];
  cin>>burger[0]>>burger[1]>>burger[2]>>drink[0]>>drink[1];

  int min = burger[0] + drink[0] - 50;
  for(int i=0;i<3;i++)
  {
    for(int j=0;j<2;j++)
    {
      if(min > (burger[i] + drink[j] - 50))
        min = burger[i] + drink[j] - 50;
    }
  }
  cout<<min<<"\n";
  return 0;
}