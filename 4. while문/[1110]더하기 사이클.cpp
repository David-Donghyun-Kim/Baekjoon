#include <iostream>
using namespace std;

int main()
{
	int num, newNum, oirginalNum;
	int count = 0;
	cin >> num;
	if (num < 10)
		num *= 10;
	oirginalNum = num;
	while (true)
	{
		newNum = num / 10 + num % 10;
		num = (num % 10) * 10 + newNum % 10;
		count++;
		if (oirginalNum == num)
			break;
	}
	cout << count << "\n";
}