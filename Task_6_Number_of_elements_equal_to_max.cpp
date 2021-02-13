#include <iostream>

int main ()
{
	int input_buffer, max_element = 0, number_max_elements = 0;
	
	std::cin >> input_buffer;
	
	while (input_buffer != 0)
	{
		if (input_buffer > max_element)
		{
			max_element = input_buffer;
			number_max_elements = 0;
		}
		
		if (input_buffer == max_element)
		{
			number_max_elements += 1;
		}
		
		std::cin >> input_buffer;
	}
	
	std::cout << number_max_elements;
	
	return 0;
}
