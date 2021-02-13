#include <iostream>

int main ()
{
	int input_buffer, quantity_even = 0;
	
	std::cin >> input_buffer;

	while (input_buffer != 0)
	{
		if (input_buffer % 2 == 0)
		{
			quantity_even += 1;
		}
		
		std::cin >> input_buffer;
	}

	std::cout << quantity_even;
	
	return 0;
}
