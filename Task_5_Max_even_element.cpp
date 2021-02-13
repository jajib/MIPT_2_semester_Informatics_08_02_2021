#include <iostream>

int main ()
{
	int input_buffer;
	int max_number = 0;
	
	std::cin >> input_buffer;
	
	while (input_buffer != 0)
	{
		if (!(input_buffer % 2) && (input_buffer > max_number))
		{
			max_number = input_buffer;
		} 
		
		std::cin >> input_buffer;
	}
	
	std::cout << max_number;
		
	return 0;
}
