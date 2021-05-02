#include <iostream>

int main()
{
	bool end;
	int speed = 0;
	int money = 0; 
	char auto_id [6] = {};
	char boss_id [6]= {'A', '9', '9', '9', 'A', 'A'}; 
	
	while (true)
	{
		end = true;
		
		std::cin >> speed;
		for (int i = 0; i < 6; i++)
		{	
			std::cin >> auto_id[i];
			if (auto_id[i] != boss_id[i])
			{
				end = false;
			}
		}
		
		if (end)
		{
			break;
		}
		
		if (speed > 60)
		{
			if (auto_id[1] == auto_id[2] && auto_id[2] == auto_id[3])
			{
				money += 1000;
			}
			else if (auto_id[1] == auto_id[2] || auto_id[1] == auto_id[3] || auto_id[2] == auto_id[3])
			{
				money += 500;
			}
			else
			{
				money += 100;
			}
		}
	}

	std::cout << money;
}