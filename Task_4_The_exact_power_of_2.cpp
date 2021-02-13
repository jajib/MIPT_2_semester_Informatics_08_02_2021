#include <iostream>

int main ()
{
	int number, buffer;
	
	std::cin >> number;
	
	buffer = number >> 1;
	
	while (!(buffer % 2))
	{
		buffer = (buffer >> 1);
	}
	
	if ((buffer >> 1) == 0)
	{
		std::cout << "YES";
	} else
	{
		std::cout << "NO";
	}
	
	return 0;
}

