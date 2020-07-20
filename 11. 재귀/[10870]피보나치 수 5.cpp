#include <iostream>

int fibonacci(int num)
{
    if (num == 0)
        return 0;
    if (num == 1)
        return 1;
    num = fibonacci(num - 1) + fibonacci(num - 2);
    return num;
}
int main()
{
    int n;
    std::cin >> n;
    std::cout << fibonacci(n) << "\n";
    return 0;
}