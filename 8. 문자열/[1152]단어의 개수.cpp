#include <iostream>
#include <string>
int main() 
{
  int count = 1;
  std::string input;
  std::getline(std::cin,input);
  for(int i=0;i<input.length();i++)
  {
    if(input.at(i) == ' ')
      count++;
  }
  if(input.at(0) == ' ') count--;
  if(input.at(input.length()-1) == ' ') count--;
  std::cout<<count<<"\n";

  return 0;
}