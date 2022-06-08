#include <iostream>

int main() 
{
	int k;
	int f;
	int arr[9] = {6,7,8,9,-8,3,2,45};

	f = arr[0];
	for (int i = 0; i < 8; i++)
		{
			for (int j = 0; j < 8; j++)
			{
				if (arr[i] > f)
				k = arr[i];
			}
			if (arr[i] <= f)
			f = arr[i];
		}
	std::cout << "The most little number: " << f << std::endl;
	std::cout << "The most big number: " << k << std::endl;
	return 0;
}