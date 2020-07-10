#include <iostream>
#include <string>
using namespace std;

int main() 
{
  int times[26] = {3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,8,9,9,9,10,10,10,10};
  string input;
  int result = 0;
  cin>>input;
  for(char x : input)
  {
    result += times[x - 'A'];
  } 
  cout<<result<<"\n";

  return 0;
}