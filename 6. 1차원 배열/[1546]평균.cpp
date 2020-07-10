#include <iostream>
using namespace std;
int main()
{
	int n;
	double max = 0, total = 0;
	cin >> n;
	double* arr = new double[n];
	for (int i = 0; i < n; i++)
	{
		double input;
		cin >> input;
		arr[i] = input;
		if (max < input)
			max = input;
	}
	for (int i = 0; i < n; i++)
	{
		arr[i] = (arr[i] / max) * 100;
		total += arr[i];
	}
	cout.precision(5);
	cout << total / n << "\n";

}