#include <iostream>

int main() {
  int x, y;
  std::cin>>x>>y;
  if(x > 0 && y > 0) std::cout<<1<<"\n";
  if(x > 0 && y < 0) std::cout<<4<<"\n";
  if(x < 0 && y < 0) std::cout<<3<<"\n";
  if(x < 0 && y > 0) std::cout<<2<<"\n";

  return 0;
}