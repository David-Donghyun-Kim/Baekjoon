#include <iostream>
/*
원판 3개 -> 이동횟수 7
원판 4개 -> 이동횟수 15
원판 5개 -> 이동횟수 31
...
원판 n개 -> 이동횟수 2^n - 1

0110 = 6
1100 = 12
*/

void hanoiTower(int n, int from, int by, int to)
{
    if (n == 1)
        std::cout << from << " " << to << "\n";
    else
    {
        hanoiTower(n - 1, from, to, by);
        std::cout << from << " " << to << "\n";
        hanoiTower(n - 1, by, from, to);
    }
}
int main()
{
    int num;
    std::cin >> num;
    std::cout << (1 << num) - 1 << "\n"; // 비트연산자, 2의 거듭제곱
    hanoiTower(num, 1, 2, 3);
    return 0;
}