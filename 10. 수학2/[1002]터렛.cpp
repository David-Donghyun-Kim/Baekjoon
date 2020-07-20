#include <iostream>
/*
    두 원의 교점이 두개일 때 r-r' < d < r+r'
    두 원의 교점이 한개일 때 r-r' = d 혹은 r+r' = d
    두 원의 교점이 없을 때 -> r+r' < d 혹은 r-r' > d
    두 원의 교점이 무한할 때 -> 두 원이 완전히 같을 때
*/
int main()
{
    int T;
    std::cin >> T;
    while (T--)
    {
        int x1, y1, r1, x2, y2, r2, dist, sum, dif;
        std::cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;
        if (x1 == x2 && y1 == y2 && r1 == r2)
        {
            std::cout << -1 << "\n";
            continue;
        }
        dist = (x1 - x2) * (x1 - x2) + (y1 - y2) * (y1 - y2);
        sum = (r1 + r2) * (r1 + r2);
        dif = r1 > r2 ? (r1 - r2) * (r1 - r2) : (r2 - r1) * (r2 - r1);
        if (dif < dist && sum > dist)
            std::cout << 2 << "\n";
        else if (dif == dist || sum == dist)
            std::cout << 1 << "\n";
        else
            std::cout << 0 << "\n";
    }
    return 0;
}