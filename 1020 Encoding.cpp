#include <iostream>
#include <string>

int main()
{
	int n;
	std::cin >> n;

	std::string str;
	while(n--)
	{
		std::cin >> str;

		char pre = str[0];
		int count = 1;
		for(int i = 1; i < str.size(); ++i)
		{
			if(str[i] == pre)
			{
				++count;
			}
			else
			{
				if(count > 1)
				{
					std::cout << count;
				}
				std::cout << pre;
				pre = str[i];
				count = 1;
			}
		}

		if(count > 1)
		{
			std::cout << count;
		}
		std::cout << pre;

		std::cout << std::endl;
	}

	return 0;
}
