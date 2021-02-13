#include <iostream>

int main ()
{
	int year;
	char* is_leap = "NO";
	
	std::cin >> year;
	
	if (year % 400 == 0)
	{
		is_leap = "YES";	
	} else if (year % 100 == 0)
	{
		is_leap = "NO";
	} else if (year % 4 == 0)
	{
		is_leap = "YES";
	}
	
	std::cout << is_leap;
	
	return 0;
}
