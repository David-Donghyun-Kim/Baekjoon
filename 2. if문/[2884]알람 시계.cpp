#include <iostream>
using namespace std;

int main()
{
	int hour, min;
	cin >> hour >> min;
	if (min - 45 < 0)
	{
		min = 60 + (min - 45);
		hour--;
		if (hour < 0)
			hour = 24 + hour;
	}
	else
		min = min - 45;
	cout << hour << " " << min << "\n";
	return 0;
}