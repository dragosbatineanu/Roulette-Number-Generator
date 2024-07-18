#include <iostream>
#include <cstdlib>

#include "Header.h"


int main() {

	int num1;
	bool answer = true;

	std::cout << "Enter the range of numbers:" << std::endl;
	std::cout << "Highest number:" << std::endl;
	std::cin >> num1;
	num1 += 1;

	//randomNumber(num1);

	while (answer) {

		if (std::cin && (answer == 0 || answer == 1)) {
			randomNumber(num1);
			std::cout << "Another number?" << std::endl;
			std::cin >> answer;
		}
		else {
			std::cout << "Error wrong answer." << std::endl;
			break;
		}
	}
}

