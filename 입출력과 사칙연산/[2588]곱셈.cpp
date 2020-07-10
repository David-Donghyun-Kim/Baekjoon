#include <iostream>
using namespace std;

int main()
{
	int a, b, c;
	cin >> a >> b;
	if (a < 100 || a>1000 || b < 100 || b>1000)
		return 0;
	c = b;
	cout << a * (b % 10) << "\n";
	b /= 10;
	cout << a * (b % 10) << "\n";
	b /= 10;
	cout << a * b << "\n";
	cout << a * c << "\n";
	return 0;
}