#include <iostream>

int main()
{
	int size;
	int width;
	std::cout << "Please, enter size of square: " <<std::endl;
	std::cin >> size >> width;

	if (size <= 0 || size <= 0)
		return (0);

	for (int j = 0; j < size; j++)
	{
		for (int i = 0; i < width; i++)
		{
			if (i == 0 || i <= width)
			{
				std::cout << "*";
			}
			else if (j == 0 || j <= size)
				std::cout << "*";
			else
				std::cout << " ";
		}
		std::cout << "\n";
	}
	return 0;
}