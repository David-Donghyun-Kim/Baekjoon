#include <iostream>
#include <cmath>
/*
거리    횟수    구현        증가
1       1       1
2       2       11          +1
3       3       111         +1
4       3       121
5       4       1211        +1
6       4       1221
7       5       12211       +1
8       5       12221       
9       5       12321
10      6       123211      +1
...
16      7       1234321
25      9       123454321                

n*n     n+(n-1)
*/
int main()
{
    int T;
    std::cin>>T;
    while(T--)
    {
        double x,y,len,num = 1, mid;
        std::cin>>x>>y;
        len = y - x;
        for(num;;num++)
        {
            if(pow(num,2) >= len)
                break;
        }
        mid = (int)((pow(num,2) + pow(num-1,2))/2);
        if(mid >= len) std::cout<<2*num - 2<<"\n";
        else std::cout<<2*num -1<<"\n";
    }
    return 0;
}