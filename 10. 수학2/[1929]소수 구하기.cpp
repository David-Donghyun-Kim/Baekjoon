#include<iostream>

// 에라토스테네스의 체 사용
int main()
{
    int M,N;
    std::cin>>M>>N;
    int *arr = new int[N+1]{0,1}; // 0이면 소수, 1이면 소수 아님
    for(int i=2;i<N+1;i++)
    {
        if(!(arr[i])) //arr[i] == 0
        {
            if(i * i > 1000000) break; // 문제에서 주어진 범위가 1,000,000임
            for(int j = i*i;j<N+1;j+=i)
                arr[j] = 1;
        }
    }
    for(int i=M;i<N+1;i++)
    {
        if(!(arr[i])) std::cout<<i<<"\n";
    }
    return 0;
}