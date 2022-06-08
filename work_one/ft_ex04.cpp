#include <iostream>

int main () 
{
	int f;
	int arr[] = {9,7,3,5,5,-6,7,8,1,0};
	int i = 0;

	f = arr[0];
	while (i < 10)
	{
		if (arr[i] <= f)
			f = arr[i];
		i++;
	}
	std::cout << f << std::endl;
	return 0;
}