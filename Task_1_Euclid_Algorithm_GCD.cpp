#include <iostream>

int main ()
{
	int number1, number2;
	
	std::cin >> number1 >> number2;
	
	int divisible = (number1 > number2 ? number1 : number2); 
	int divisor   = (number1 > number2 ? number2 : number1);
	int remainder = divisible % divisor;
	
	while (remainder != 0)
	{
		divisible = divisor;
		divisor   = remainder;
		remainder = divisible % divisor;	
	}
	
	std::cout << divisor;
	
	return 0;
}
