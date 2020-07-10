#include <iostream>
using namespace std;

int main()
{
	int numLoop, a, b;
	cin >> numLoop;
	while (numLoop > 0)
	{
		cin >> a >> b;
		cout << a + b << "\n";
		numLoop--;
	}
	return 0;
    
}