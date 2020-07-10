#include <iostream>
using namespace std;

int main()
{
	int n, input, min, max;
	cin >> n >> input;
	min = input;
	max = input;
	for (int i = 1; i < n; i++)
	{
		cin >> input;
		if (min > input)
			min = input;
		if (max < input)
			max = input;
	}
	cout << min << " " << max << "\n";	
}