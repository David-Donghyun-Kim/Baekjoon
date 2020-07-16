#include <iostream>

int main()
{
    // 홀수레벨은 왼->오
    // 짝수레벨은 오->왼
    int num, level = 1, sum = 1;
    std::cin>>num;
    for(sum;sum<=num;level++)
        sum += level;
    level--;
    sum -= level;
    if(level%2 == 1)
        std::cout<<level-(num-sum)<<"/"<<1+(num-sum)<<"\n";
    else
        std::cout<<1+(num-sum)<<"/"<<level-(num-sum)<<"\n";
    
    return 0;
}