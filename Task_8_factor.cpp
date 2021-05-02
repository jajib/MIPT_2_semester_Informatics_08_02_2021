#include <iostream>

int main()
{
	int N;
	std::cin >> N;
	
	int buffer = 2;
	while(N > 1)
	{
		if (!(N % buffer))	
		{
			std::cout << buffer << std::endl;
			N = N / buffer;
		}
		else
		{
			buffer++;
		}
	}
}