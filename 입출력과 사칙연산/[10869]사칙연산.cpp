#include <iostream>
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;
	if (A <= 0 || B <= 0 || A > 10000 || B > 10000)
		return 0;
	cout << A + B << "\n" << A - B << "\n" << A * B << "\n" << A / B << "\n" << A % B << "\n";
	return 0;
}