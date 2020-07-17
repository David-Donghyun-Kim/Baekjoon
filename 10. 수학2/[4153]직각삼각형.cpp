#include<iostream>

int main()
{
    while(1)
    {
        int a,b,c,longest,sum;
        std::cin>>a>>b>>c;
        if(!a && !b && !c) break;
        longest = a<=b ? (b <= c ? c : b) : (a <= c ? c : a);
        sum = longest == a ? (b*b + c*c) : (longest == b ? (a*a + c*c) : (a*a + b*b));

        if(sum == longest*longest) std::cout<<"right\n";
        else std::cout<<"wrong\n";
    }
    return 0;
}