#include <iostream>
using namespace std;

int main()
{
	int max = 0;
	int maxIndex = 0;
	int input;
	for (int i = 0; i < 9; i++)
	{
		cin >> input;
		if (input > max)
		{
			max = input;
			maxIndex = i + 1;
		}
	}
	cout << max << "\n" << maxIndex;
	return 0;
}