#include <iostream>
#include <string>
int main() 
{
  std::string num1;
  std::string num2;
  std::cin>>num1>>num2;
  
  std::string temp = "";
  temp = temp + num1.at(2) + num1.at(1) + num1.at(0);
  num1 = temp;
  temp = "";
  temp = temp + num2.at(2) + num2.at(1) + num2.at(0);
  num2 = temp;
  int n1, n2;
  n1 = std::stoi(num1);
  n2 = std::stoi(num2);
  if(n1 > n2) std::cout<<n1<<"\n";
  else std::cout<<n2<<"\n";

  return 0;
}