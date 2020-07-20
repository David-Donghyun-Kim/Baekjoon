#include <iostream>

int factorial(int num)
{
    if (num > 2)
        num *= factorial(num - 1);
    return num;
}

int main()
{
    int n, result = 1;
    std::cin >> n;
    if (n != 0)
        result = factorial(n);
    std::cout << result << "\n";
    return 0;
}