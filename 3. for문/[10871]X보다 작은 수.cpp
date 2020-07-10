#include <iostream>
using namespace std;

int main()
{
	int N, X, input;
	cin >> N >> X;
	int* arr = new int[N];
	for(int i=0;i<N;i++)
	{
		cin >> input;
		arr[i] = input;
	}
	for (int i = 0; i < N; i++)
	{
		if (arr[i] < X)
			cout << arr[i] << " ";
	}
	return 0;
}