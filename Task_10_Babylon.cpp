#include <iostream>
#include <string>

int main ()
{
	int N;
	std::cin >> N;
	
	std::string babylon;
	
	int buffer, dec_num, digit_num;
	while (N > 0)
	{
		buffer = N % 60;
		
		digit_num = buffer % 10;
		dec_num = (buffer - digit_num) / 10;
		
		for (int i = 0; i < digit_num; i++)
		{
			babylon.insert(babylon.begin(), 'v');
		}
		
		for (int i = 0; i < dec_num; i++)
		{
			babylon.insert(babylon.begin(), '<');
		}
	
		N = (N - buffer) / 60;
		
		if (N > 0)	
		{
			babylon.insert(babylon.begin(), '.');
	 	}
	}
	
	std::cout << babylon;
}