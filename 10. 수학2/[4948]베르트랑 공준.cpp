#include<iostream>
int main()
{
    int arr[246913] = {0,1};
    for(int i=2;i<=246912;i++)
    {
        if(!(arr[i]))
        {
            if(i*i > 246913) break;
            for(int j=i*i;j<=246912;j+=i)
                arr[j] = 1;
        }
    }
    while(1)
    {
        int n, count = 0;
        std::cin>>n;
        if(!n) break;
        for(int i=n+1;i<=2*n;i++)
        {
            if(!(arr[i])) count++;
        }
        std::cout<<count<<"\n";
    }
    return 0;
}