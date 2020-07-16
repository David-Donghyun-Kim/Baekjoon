#include<iostream>

int main()
{
    int M,N,num = 0,tot = 0,min;
    bool isMin = true;
    std::cin>>M>>N;
    num = M;
    if(M == 1) num++;
    while(num<=N)
    {
        bool isPrime = true;
        for(int i=2;i<num;i++)
        {
            if(!(num%i))
            {
                isPrime = false;
                break;
            }
        }
        if(isPrime)
            {
                if(isMin)
                {
                    min = num;
                    isMin = false;
                }
                tot += num;
            }
        num++;
    }
    if(!tot)
        std::cout<<-1<<"\n";
    else
        std::cout<<tot<<"\n"<<min<<"\n";
    return 0;
}