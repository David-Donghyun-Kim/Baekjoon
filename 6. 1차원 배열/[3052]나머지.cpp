#include <iostream>
#include<map>
using namespace std;
int main()
{
	map<int, int> map;
	for (int i = 0; i < 10; i++)
	{
		int num;
		cin >> num;
		if (map.count(num % 42) == 0)
			map.insert(make_pair(num % 42, 1));
		else
			map[num % 42]++;
	}
	cout << map.size() << "\n";
}