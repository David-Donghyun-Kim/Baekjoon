#include <iostream>
using namespace std;
bool Hansoo(int n)
{
	// If n is 1 or 2 digits number, it is always hansoo.
	if (n < 100) return true;
	// The question said, input number is less than or equal to 1000
	// Which means I don't need to care about more than 4 digits (1000 isn't hansoo)
	if (n == 1000) return false;
	int arr[3];
	int i = 0;
	while (n != 0)
	{
		arr[i] = n % 10;
		n /= 10;
		i++;
	}
	if (arr[2] - arr[1] == arr[1] - arr[0]) return true;
	else return false;
}

int main(void)
{
	int num, sum = 0;
	cin >> num;
	for (int i = 1; i <= num; i++)
	{
		if (Hansoo(i)) sum++;
	}
	cout << sum << "\n";
	return 0;
}