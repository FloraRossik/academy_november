#include <iostream>
#include <cmath>

int main () 
{
	float usd = 0.01405509f;
	float euro = 0.01217381f;
	float yen = 1.594058032f;
	float v;

	std::cout << "Enter rub: " << std::endl;
	std::cin >> v;
		std::cout << "usd: " << round(usd * v * 100) / 100;
		std::cout << "\n";
		std::cout << "euro: " << round(euro * v * 100) / 100;
		std::cout << "\n";
		std::cout << "yen: " << round(yen * v * 100) / 100;
	return 0;
}