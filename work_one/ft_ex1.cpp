#include <iostream>
#include <string.h>

int main () 
{
	char str1;
	char str2;
	size_t i;
	size_t size;
	std::cout <<"Enter first string" <<std::endl;
	std::cin >> str1;
	std::cout <<"Enter second string" <<std::endl;
	std::cin >> str2;
	std::cout <<"Enter please index for str1: " <<std::endl;
	std::cin >> i;
	std::cout <<"Please enter the size: " <<std::endl;
	std::cin >> size;

	while (str1[i] < size)
	{
		str1[i] == str2[j];
		i++;
		j++;
		return (str1);
	}
	return (NULL);
}