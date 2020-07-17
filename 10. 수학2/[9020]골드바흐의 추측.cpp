#include<iostream>
#define MAX 10001
int arr[MAX] = {0,1}; // 0이면 소수, 1이면 소수 아님

void eratosthenes()
{
    for(int i=2;i*i<MAX;i++) // i*i 인 이유는, 어짜피 그전까지는 중복없이 소수기 때문
    {
        if(!(arr[i])) // arr[i] == 0
        {
            for(int j= i*i;j<MAX;j+=i)
                arr[j] = 1;
        }
    }
}

void goldbach(int num)
{
    for(int i=num/2;i>0;i--)
    {
        if(!(arr[i]) && !(arr[num-i]))
        {
            std::cout<<i<<" "<<num-i<<"\n";
            break;
        }
    }
}
int main()
{
    eratosthenes();
    int T;
    std::cin>>T;
    while(T--)
    {
        int num;
        std::cin>>num;
        goldbach(num);
    }

    return 0;
}