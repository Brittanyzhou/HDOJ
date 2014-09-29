#include <iostream>
#include <string>
#include <stdio.h>

void reverse(std::string &str, int begin, int end)
{
	while(begin < end)
	{
		char tmp = str[begin];
		str[begin++] = str[end];
		str[end--] = tmp;
	}
}

int main()
{
	int n;
	std::cin >> n;
	getchar();
	
	std::string str;
	while(n--)
	{
		std::getline(std::cin, str);
		int i = 0; 
		while(i < str.size())
		{
			while(i < str.size() && str[i] == ' ')
			{
				++i;
			}
			int start = i;
			++i;
			while(i < str.size() && str[i] != ' ')
			{
				++i;
			}
			reverse(str, start, i - 1);
			++i;
		}
	
		std::cout << str << std::endl;
	}

    return 0;
}
