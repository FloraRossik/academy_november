#include <iostream>
#include <string.h>

int		str_comp(const char *s1, const char *s2, size_t size)
{
	
	while (size--)
	{
		if (s1 > s2)
		return (1);
		if (s2 > s1)
		return (-1);
		if (s1 == s2)
		return (0);
	}
}


/*
int		sort_num(int *arr, size_t size)
{
	std::string arr[11];
	int tmp;

	
	for(int i = 0; i <= size; i++)
	{
		for (int j = i + 1; j <= size; j++)
		{
			if (arr[j] < arr[i])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}
}

*/

int main()
{
	int i = 0;
	std::string command;
	std::string Number_mob[10];
	std::string Number_home[10];
	std::string name[10];


	while (true)
	{	
		int tmp;
		//std::cout << "Please enter command 'ADD home' that add Number: ";
		std::cin >> command;

		if (command == "ADD home")
		{
		if (i > 10)
		{
			std::cout << "The list full";
			continue;
		}
		std::cout << "Enter please name: ";
			std::cin >> tmp;
			name[i] = tmp;
			std::cout << "Enter number: " << std::endl;
			std::cin >> tmp;
			Number_home[i] = tmp;
			std::cout << "Done: " << name[i] << " " << Number_home[i] << std::endl;
			i++;
			getchar();
		}

		if (command == "ADD phone")
		{
			std::cout << "Enter please name";
			std::cin >> tmp;
			name[i] = tmp;

			std::cout << "Enter please number phone" << std::endl;
			std::cin >> tmp;
			Number_mob[i] = tmp;

			std::cout << "Done: " << name[i] << Number_mob[i] << std::endl;
			i++;
			getchar();
		}
	}
	std::cout << "Save: " << Number_home[i] << Number_mob[i] << std::endl;
}