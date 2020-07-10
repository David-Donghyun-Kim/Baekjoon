#include <iostream>
using namespace std;

int main() {
  int students [5] = {40,40,40,40,40};
  for(int i=0;i<5;i++)
  {
    int score;
    cin>>score;
    if(score > students[i])
      students[i] = score;
  }
  cout<<(students[0]+students[1]+students[2]+students[3]+students[4])/5<<"\n";
  return 0;
}