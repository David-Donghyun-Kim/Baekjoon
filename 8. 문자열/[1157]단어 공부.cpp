#include <iostream>

using namespace std;
int main()
{
	string input;
	cin >> input;
	int arr[26] = { 0, };

	for (int i = 0; i < input.length(); i++)
	{
		input[i] = toupper(input[i]);
		arr[input[i] - 'A']++;
	}
	int max = arr[0];
	char maxAlpha = 'A';
	for (int i = 1; i < sizeof(arr)/sizeof(int); i++)
	{
		if (max < arr[i])
		{
			max = arr[i];
			maxAlpha = i + 'A';
		}
		else if (max == arr[i])
			maxAlpha = '?';
	}
	cout << maxAlpha;
	return 0;
}