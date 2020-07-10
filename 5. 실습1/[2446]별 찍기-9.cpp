#include <iostream>

int main() {
  int num, pretty_print = 0;
  std::cin >> num;
  for(int i = (2*num-1);i>0;i -= 2)
  {
    for(int k=0;k<pretty_print;k++)
      std::cout<<" ";
    for(int j=0;j<i;j++)
      std::cout<<"*";
    pretty_print ++;
    std::cout<<"\n";
  }
  pretty_print -= 2;
  for(int i=2;i<(2*num-1);i +=2)
  {
    for(int k=0;k<pretty_print;k++)
      std::cout<<" ";
    for(int j=0;j<=i;j++)
      std::cout<<"*";
    pretty_print--;
    std::cout<<"\n";
  }
}