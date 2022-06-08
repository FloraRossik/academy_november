#include <iostream>
#include <math.h>

float	ft_distance(int x0, int y0, int x1, int y1)
{
	return (sqrt(pow((x1 - x0), 2) + pow((y1 - y0), 2)));
}

int main () {

	int x = 15;
    int y = 15;
	int r;    
	
	std::cout << "Please enter point (x , y):" << std::endl;
    std::cin >> x >> y;
	std::cout << "Please enter a radius r :" << std::endl;
	std::cin >> r;
	if (x <= 0 || y <= 0 || r <= 0)
		return (0);
    for (int i = 0; i < 30; i++)
	{
    	for (int j = 0; j < 30; j++)
		{
			if (ft_distance(x, y, i, j) <= r)
				std::cout << "x";
			else
				std::cout << ".";
		}
		std::cout << "\n";
	}
    return 0;
}