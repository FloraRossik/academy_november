#include <iostream>
#include <time.h>

int main()
{
	int arr[10] = {12,-45,67,89,34,15,-4,14,-18,20};

	// int count = 0;
	// //int tmp = 1;
	int sum = 0;
	// int min = 0;
	// int max = 0;
	int first_min;
	int last_min;
	int poss_last;
	int poss_first;


	for (int i = 0; i < 10; i++)
	{
		if (arr[i] < 0)
		{
			last_min = arr[i];
			poss_last = i;
		}
	}
	for (int i = poss_last; i >= 0; i--)
	{
		if (arr[i] < 0)
		{
			first_min = arr[i];
			poss_first = i;
		}
	}
	std::cout << first_min << std::endl;
	std::cout << last_min << std::endl;

	for (int i = poss_first; i <= poss_last; i++)
	{
		sum += arr[i];
	}
	std::cout << sum << std::endl;
}


// 		if (arr[i] < 0 )
// 		{
// 			count += arr[i];
// 		}
// 		if (arr[i] % 2 == 0)
// 		{
// 			tmp *= arr[i];
// 		}
// 		sum += arr[i];
// 		if (arr[i] >= arr[min])
// 			min = i;
// 		if (arr[i] <= arr[max])
// 			max = i;
// 	}
// 	int start, end, product;
// 	if (min > max)
// 	{
// 		start = max;
// 		end = min;
// 	}
// 	else
// 	{
// 		start = min;
// 		end = max;
// 	}
// 	product = 1;
// 	for (int i = start; i <= end; i++)
// 	{
// 		product *= arr[i];
// 	}
// 	std::cout << "The sum of negative numbers  : " << count << std::endl;
// 	std::cout << "The product of even integers : " << tmp << std::endl;
// 	std::cout << "The sum of all numbers       : " << sum << std::endl;
// 	std::cout << "The product of numbers between min and max : " << product << std::endl;
// }
