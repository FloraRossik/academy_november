#include <iostream>

int main () {

	std::string number1 ("World");
	std::string number2 ("World");

	while (true){

	std::cout <<"Enter first string" <<std::endl;
	std::cin >> number1;
	std::cout <<"Enter second string" <<std::endl;
	std::cin >> number2;

	if (number1 == number2) {
		std::cout <<"String is equal \n" <<std::endl;
	}
	else  {
		std::cout <<"String is not equal \n" <<std::endl;
		}
	}
	return 0;
}