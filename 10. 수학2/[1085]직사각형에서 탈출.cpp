#include <iostream>

int main()
{
    int x,y,w,h,xMin,yMin;
    std::cin>>x>>y>>w>>h;
    // 4가지 거리: x, y, w-x, h-y
    xMin = x <= (w-x) ? x : (w-x);
    yMin = y <= (h-y) ? y : (h-y);
    std::cout<< (xMin <= yMin ? xMin : yMin) <<"\n";
    return 0;
}