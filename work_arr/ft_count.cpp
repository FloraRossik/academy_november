#include <iostream>

int main () 
{
	std::string str = "HELLOOO World";
	std::cin >> str;

	int count = 0;
	for (int i = 0; i < str.size(); i++) {
		if (str[i] == 'o' || str[i] == 'O')
		count++;
	}
	std::cout << count;
	return 0;
}