#include <iostream>

int main()
{

	int width;
	int height;
	std::cin >> width >> height;

	if (width <= 0 || height <= 0)
		return (0);

	for (int j = 0; j < height; j++)
	{
		for (int i = 0; i < width; i++)
		{
			if (i == 0 || i == width - 1)
			{
				std::cout << "*";
			}
			else if (j == 0 || j == height - 1)
				std::cout << "*";
			else
				std::cout << " ";
		}
		std::cout << "\n";
	}
	return 0;
}