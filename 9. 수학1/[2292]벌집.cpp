#include<iostream>

int main()
{
    int num, level = 1;
    std::cin>>num;

    for(int i=2;i<=num;level++)
        i = i + (6 * level);
    std::cout<<level<<"\n";
    return 0;
}