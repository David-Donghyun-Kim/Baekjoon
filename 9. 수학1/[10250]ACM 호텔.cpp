#include<iostream>
int main()
{
    int T;
    std::cin>>T;
    for(int i=0;i<T;i++)
    {
        int H,W,N;
        std::cin>>H>>W>>N;
        int floor = N%H;
        int num = N/H;
        if(floor == 0)
            floor = H;
        else
            num++;
        
        std::cout<<floor*100 + num<<"\n";
    }
    return 0;
}