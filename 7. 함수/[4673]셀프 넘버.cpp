#include <iostream>
using namespace std;
const int MAX = 10001;
int functionD(int n)
{
	int sum = n;
	while (n != 0)
	{
		sum += n % 10;
		n /= 10;
	}
	return sum;
}

int main(void)
{
	bool arr[MAX] = {false, };
	for (int i = 1; i < MAX; i++)
	{
		int num = functionD(i);
		if (num < MAX)
			arr[num] = true;
	}
	for (int i = 1; i < MAX; i++)
	{
		if (!arr[i]) cout << i << "\n";
	}

	return 0;
}