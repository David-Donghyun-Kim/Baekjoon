#include <iostream>
#include <array>

int main()
{
	// Not using strlen().
	int a, b, c, result;
	int arr[10] = { 0, };

	std::cin >> a >> b >> c;
	result = a * b * c;
	while (result > 0)
	{
		arr[result % 10]++;
		result /= 10;
	}
	for (int i = 0; i < 10; i++)
		std::cout << arr[i] << std::endl;
	return 0;
}