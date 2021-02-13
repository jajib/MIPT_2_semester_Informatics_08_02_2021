#include <iostream>

int main ()
{
	int input_number;
	bool is_prime = true;
	
	std::cin >> input_number;
	
	for (int cnt = 2; cnt <= (input_number + input_number%2)/2; cnt++)
	{
		if (input_number % cnt == 0)
		{
			is_prime = false;
		}
	}
	
	std::cout << is_prime;
	
	return 0;
}
