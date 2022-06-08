#include <iostream>

int main()
{
	int start ,end, min, max;
	int arr[16] = {0,456,789,200,345,987,384,619,372,704,681,133, 566};

	std::cout << "Please enter start: " << std::endl;
	std::cin >> start;
	std::cout << "Please enter end: " << std::endl;
	std::cin >> end;

	if (end < start || end > 12 || start > 12)
		return 1;
	min = start;
	max = start;
	for (int i = start; i <= end; i++)
	{
		if (arr[i] <= arr[min])
		{
			min = i;
		}
		if (arr[i] >= arr[max])
		{
			max = i;
		}
	}
	std::cout << "max profit : " << arr[max] << " " << "month: " << max << std::endl;
	std::cout << "min profit : " << arr[min] << " " << "month: " << min << std::endl;
	return 0;
}