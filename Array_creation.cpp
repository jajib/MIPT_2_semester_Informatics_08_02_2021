#include <iostream>

int main ()
{
	int array[9] = {1, 3, 2, 5, 4, 6, 8, 4, 2};
	
	std::cout << sizeof(array) / sizeof(int) << std::endl;
	
	for (auto cnt : array)
	{
		std::cout << cnt << std::endl;
	}

	auto x = array;
	
	for (auto cnt2 : x)
	{
		std::cout << cnt2 << std::endl;
	}
}
