#include <iostream>

void	print_arr(std::string *arr1, int size)
{

	for (int i = 0; i < size; i++)
	{
		std::cout << arr1[i] << std::endl;
	}
}

int main ()
{
	std::string name[15];
	std::string Number[15];
	std::string command;
	int i = 0;

	while (true)
	{
		std::string tmp;
		std::cout << "if you add a person enter: ADD \n" <<
					"if you find a person enter: Search \n" <<
					"if you delete a person enter: DEL: \n" << 
					"if you want to exit enter: exit" << std::endl;
		std::cin >> command;
		

		if (command == "ADD")
		{
			if (i > 14)
			{
				std::cout << "The list is full !\n";
				continue;
			}
			std::cout << "Enter please name: ";
			std::cin >> tmp;
			name[i] = tmp;
			std::cout << "Enter number: " << std::endl;
			std::cin >> tmp;
			Number[i] = tmp;
			std::cout << "Done: " << name[i] << " " << Number[i] << std::endl;
			i++;
			getchar();
		}
		else if (command == "Search")
		{
			std::cout << "Enter please name or number: " << std::endl;
			std::cin >> tmp;

			std::cout << "found this {\n";
			for (int i = 0; i < 15; i++)
			{
				if (name[i].compare(tmp) == 0 || Number[i].compare(tmp) == 0)
				{
					
					std::cout << name[i] << std::endl;
					std::cout << Number[i] << std::endl;
				}
			}
			std::cout << "}\n";
			getchar();
		}
		else if (command == "DEL")
		{
			std::cout << "enter please name: ";
			std::cin >> tmp;
			for (int i = 0; i < 15; i++)
			{
				if (name[i].compare(tmp) == 0 || Number[i].compare(tmp) == 0)
				{
					name[i] = "";
					Number[i] = "";
				}
			}
			getchar();
		}
		else if (command == "exit")
		{
			return (0);
		}
	}
}