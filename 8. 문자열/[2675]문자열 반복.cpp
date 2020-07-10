#include <iostream>
#include <string>
using namespace std;
int main()
{
	int testCaseNum, repetition;
	cin >> testCaseNum;
	for (int i = 0; i < testCaseNum; i++)
	{
		string input;
		cin >> repetition >> input;
		for (int j = 0; j < input.length(); j++)
		{
			for (int k = 0; k < repetition; k++)
			{
				cout << input.at(j);
			}

		}
		cout << "\n";
	}
	return 0;
}