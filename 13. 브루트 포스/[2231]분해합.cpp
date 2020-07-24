#include <iostream>

int main()
{
    int num, numTemp, digit = 1;
    std::cin >> num;

    // 입력된 숫자의 자릿수 구하기
    numTemp = num;
    while (num /= 10)
        digit++;
    num = numTemp;
    // 분해합은, 입력된 숫자의 자릿수 n의 9배보다 반드시 크거나 같다.
    // 입력이 54321이라면, 분해합은 54321 - (9*5)보다 크거나 같다.
    for (int i = num - (digit * 9); i < num; i++)
    {
        int iDigit = i, sum = i % 10;
        while (iDigit /= 10)
            sum += (iDigit % 10);
        if ((i + sum) == num)
        {
            std::cout << i << "\n";
            break;
        }
        if (i == num - 1)
        {
            std::cout << 0 << "\n";
            break;
        }
    }

    return 0;
}