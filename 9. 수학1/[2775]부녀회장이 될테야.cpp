#include<iostream>
int recursive(int k,int n)
{
    if(n==1) return 1;
    if(k==0) return n;
    return (recursive(k-1,n)+recursive(k,n-1));
}
int main()
{
    //k층의 n호 = k-1층의 1호~n호
    //k층의 n-1호 = k-1층의 1호~n-1호
    //k-1층의 n호

    int T,k,n;
    std::cin>>T;
    for(int i=0;i<T;i++)
    {
        std::cin>>k>>n;
        std::cout<<recursive(k,n)<<"\n";
    }
    return 0;
}