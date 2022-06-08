#include <iostream>

int main () {

	int num1;
	int num2;
	char ch;

while (true) {

	std::cout << "Please enter numbers: \n ";
	std::cin >> num1 >> ch >> num2;

	if (ch == '+') {
		std::cout << num1 + num2 << std::endl;
	}
	else if (ch == '-')
		std::cout << num1 - num2 << std::endl;
	else if (ch == '*')
		std::cout << num1 * num2 << std::endl;
	else if (ch == '/')
	{
		if (num2 == 0) 
		{
			std::cout << "cant divide by zero \n";
		}
		else
		std::cout << num1 / num2 << std::endl;
	}
	else {
		std::cout << "Error" << std::endl;
			return 1;
		}
	}
return 0;
}