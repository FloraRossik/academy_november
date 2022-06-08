#include <iostream>

int main() 
{
	int tmp;
	char num_16[16] = {'0','1','2','3','4','5','6','7','8','9','A','B','C','D','E','F'};
	char save[11];
	int rest;
	int tmp2;
	std::cin >> tmp;
	if(tmp < 0)
	{
		std::cout << "-";
		tmp *= 1;
	}
	
	int i = 2;
	int poss = 1;
	while (tmp >= 0)
	{
		rest = tmp % 16;
		tmp = tmp / 16;
		tmp2 = num_16[rest];
		save[poss--] = tmp2;
		std::cout << save[0] << save[1] << save[2];
		getchar();
	}
}