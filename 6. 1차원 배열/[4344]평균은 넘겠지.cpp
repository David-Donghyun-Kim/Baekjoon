#include <iostream>
using namespace std;

int main()
{
	int totalLoop;
	cin >> totalLoop;
	for (int i = 0; i < totalLoop; i++)
	{
		int numStudent, score, count = 0, total = 0;
		double avg;
		cin >> numStudent;
		int* arr = new int[numStudent];
		for (int j = 0; j < numStudent; j++)
		{
			cin >> score;
			arr[j] = score;
			total += score;
		}
		avg = double(total) / numStudent;
		for (int j = 0; j < numStudent; j++)
		{
			if (arr[j] > avg)
				count++;
		}
		cout.precision(3);
		cout << fixed << ((double)count / numStudent) * 100 << "%\n";
	}
	return 0;
}