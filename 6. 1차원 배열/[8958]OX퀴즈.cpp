#include <iostream>
#include <cstring>
using namespace std;
int main()
{
	int n;
	cin >> n;
	char input[80];
	for (int i = 0; i < n; i++)
	{
		int cumulatedScore = 0, score = 0;
		cin >> input;
		for (int j = 0; j < strlen(input); j++)
		{
			if (input[j] == 'O')
			{
				cumulatedScore++;
				score += cumulatedScore;
			}
			else
			{
				cumulatedScore = 0;
			}
		}
		cout << score << "\n";
	}
	return 0;
}