#include <iostream>
#include<algorithm>
using namespace std;

int main()
{
	int numArr[3];
	cin >> numArr[0] >> numArr[1] >> numArr[2];
	sort(numArr,numArr+3);
	cout << numArr[1] << "\n";
	return 0;
}