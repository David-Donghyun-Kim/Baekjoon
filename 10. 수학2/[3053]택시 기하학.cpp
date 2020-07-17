#include <iostream>
#define _USE_MATH_DEFINES
#include <cmath>

int main()
{
    double r;
    std::cin>>r;
    std::cout<<std::fixed;
    std::cout.precision(6);
    std::cout<<M_PI * pow(r,2)<<"\n";
    std::cout<<2*pow(r,2)<<"\n";
    return 0;
}