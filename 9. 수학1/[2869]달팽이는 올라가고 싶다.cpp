#include <iostream>

int main()
{
    int A,B,V;
    std::cin>>A>>B>>V;
    if((V-B) % (A-B)  == 0)
        std::cout<<(V-B)/(A-B);
    else
        std::cout<<(V-B)/(A-B)+1;
}