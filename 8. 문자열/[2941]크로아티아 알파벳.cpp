#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
  vector<string> croatia = {"c=", "c-", "dz=", "d-","lj","nj","s=","z="};
  string input;
  int count = 0;
  cin>>input;
  for(int i=0;i<croatia.size();i++)
  {
    int startPoint = input.find(croatia[i],0);
    while(startPoint != -1)
    {
      input.replace(startPoint, croatia[i].length(),"*");
      startPoint = input.find(croatia[i],startPoint);
      count++;
    }
  }
  for(int i=0;i<input.length();i++)
  {
    if(input.at(i) != '*')
      count++;
  }
  cout<<count<<"\n";
}