#include <iostream>
#include <time.h>

int main () 
{
	int f;
	srand(time(NULL));
	int const size = 10;
	int arr[size];

	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 100;
		if (arr[i] <= 68)
		std::cout << arr[i] << " ";
	}
}