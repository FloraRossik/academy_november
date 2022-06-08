#include <iostream>
#include <time.h>

int main()
{
	srand(time(NULL));
	int size = 40;
	int arr[size];
	int tmp;
	int count = 0;
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 1000 + 1;
	}
	for(int i = 0; i <= size; i++)
	{
		for (int j = i + 1; j <= size; j++)
		{
			if (arr[j] < arr[i])
			{
				tmp = arr[i];
				arr[j] = arr[i];
				arr[i] = tmp;
			}
		}
		count++;
	}
	for (int k = 0; k <= 10; k++)
	{
		std::cout << arr[k] << std::endl;
	}
	std::cout << "Number of tries: " << count <<std::endl;
	system ("pause");
}