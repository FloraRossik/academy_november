#include <iostream>
#include <time.h>

int		**create_arr(int n, int k)
{
	int **arr;

	arr = (int **)malloc(n * sizeof(int *));
	for (size_t i = 0; i < n; i++)
	{
		arr[i] = (int *)malloc(k * sizeof(int));
	}
	return (arr);
}

void	printAr(int **arr, size_t n, size_t k)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < k; j++)
		{
			std::cout << arr[i][j] << "  ";
		}
		std::cout << "\n";
	}
}

int main ()
{
	srand(time(NULL));
	int **arr1;

	arr1 = create_arr(4, 8);
	/*arr1 = 0x33366;*/
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			arr1[i][j] = rand() % 100 + 1;
		}
	}
	printAr((int **)arr1, 4,8);

	for (size_t i = 0; i < 4; i++)
	{
		free(arr1[i]);
	}
	free(arr1);
/*
	arr1=  0x33366 => {  0x1112   ,  0x1113  ,  0x1114    ,  0x1115  }

	0x1112 => {32, 63, 84, 4, 96, 16, 22, 54};	
	0x1113 => {80  88  42  12  12  31  6  38 }
	0x1114 => {89  73  74  43  68  43  68  58 }
	0x1115 => {31  57  21  26  34  44  87  65 }
*/
}