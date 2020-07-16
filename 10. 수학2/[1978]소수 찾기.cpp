#include <iostream>
#include <array>
int main()
{
    int N,tot = 0;
    std::cin>>N;
    for(int i=0;i<N;i++)
    {
        int num, count = 0;
        std::cin>>num;
        for(int j=1;j<=num;j++)
        {
            if(!(num % j)) count++;
        }
        if(count == 2)
            tot++;
    }
    std::cout<<tot<<"\n";
    return 0;
}