#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() 
{
  int num, count = 0;
  vector<string> words;
  cin>>num;
  
  for(int i=0;i<num;i++)
  {
    string str;
    cin>>str;
    words.push_back(str);
  }

  for(int i=0;i<words.size();i++)
  {
    bool checker[26] = {false,};
    bool flag = true;
    for(int j=1;j<words[i].length();j++)
    {
      if(checker[words[i].at(j) - 'a'])
      {
        flag = false;
        break;
      }
      if(words[i].at(j-1) != words[i].at(j))
        checker[words[i].at(j-1) - 'a'] = true;
      
    }
    if(flag)
      count++;
  }
  cout<<count<<"\n";
}