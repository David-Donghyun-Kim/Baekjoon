#include <iostream>
using namespace std;

int main() 
{
  int weight, bag = 0;
  cin>>weight;

  while(weight>=0)
  {
    if(weight % 5 == 0)
    {
      bag += (weight/5);
      break;
    }
    weight -= 3;
    bag++;
  }
  if(weight<0)
    cout<<-1<<"\n";
  else
    cout<<bag<<"\n";
}