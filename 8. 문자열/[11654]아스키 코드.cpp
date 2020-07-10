#include <iostream>
using namespace std;

int changeToAscii(char input)
{
	return (int)input;
}
int main()
{
	char input;
	cin >> input;
	cout << changeToAscii(input) << "\n";
	return 0;
}