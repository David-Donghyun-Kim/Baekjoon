#include <iostream>
/* 
분할정복법(Divide and Conquer) 사용

n = 3
***
* *
***
(1,1)일때, 빈공간 발생 -> (i,j)는 좌측 위에서부터 (0,0)
*********
* ** ** *
*********
(1,1), (1,4), (1,7)일때, 빈공간 발생...
즉 (i % 3 == 1 && j % 3 == 1) 이면 빈공간

n = 9
*********
* ** ** *
*********
***   ***
* *   * *
***   ***
*********
* ** ** *
*********
(1,1), (1,4), (1,7)
(4,1),        (4,7)
(7,1), (7,4), (7,7) 일때, 빈공간
또한,
(3,3), (3,4), (3,5)
(4,3), (4,4), (4,5)
(5,3), (5,4), (5,5) 일때, 빈공간 발생.
이들의 특징 -> 3으로 나눴을 때, 몫이 1
*/

void drawStar(int i, int j, int n)
{
    if ((i / n) % 3 == 1 && (j / n) % 3 == 1)
        std::cout << " ";
    else
    {
        if (n == 1)
            std::cout << "*";
        else
            drawStar(i, j, n / 3);
    }
}
int main()
{
    int n;
    std::cin >> n;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
            drawStar(i, j, n);
        std::cout<<"\n";
    }
    return 0;
}