#include <iostream>
using namespace std;

int main()
{
	int n, temp;
	cin >> n;
	temp = 1;
	while (temp != n + 1)
	{
		cout << temp << "\n";
		temp++;
	}
	return 0;
}