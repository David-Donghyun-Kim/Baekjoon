#include <iostream>
using namespace std;

int sum(int num, string inputNum)
{
	int sum = 0;
	for (int i = 0; i < num; i++)
	{
		sum += inputNum.at(i) - '0';
	}
	return sum;
}
int main(void)
{
	int digit;
	string inputNum;
	cin >> digit >> inputNum;
	cout << sum(digit, inputNum) << "\n";
	return 0;
}