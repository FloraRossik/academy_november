#include <iostream>

int main () {

	int arr[] = {1,2,3,4,5,6,7,8,9,0};
	std::string arrStr[] = {"First", "Second", "Third"};
	int j = 0;

	for (int i = 0; i < 10; i++) {
			std::cout << arr[i] << " ";
		}
		std::cout << "\n";
		for (int j = 0; arrStr[j][0] != '\0'; j++) {
			std::cout << arrStr[j] << " ";
	}
	return 0;
}