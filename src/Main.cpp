#include <iostream>
#include <cstdlib>

#include "NumberPicker.h"


int main() {

	//declaration of variables
	int num1;
	int amount;
	bool answer = true;
	bool unique;


	std::cout << "Enter the range of numbers:" << std::endl;
	std::cout << "Highest number:" << std::endl;
	std::cin >> num1;
	std::cout << "How many numbers?" << std::endl;
	std::cin >> amount;

	if (amount > 1) {
	std::cout << "Do they need to be unique numbers?" << std::endl;
	std::cin >> unique;
	}

	if (amount == 1){
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

	else if (amount > 1) {
		while (answer) {
			if (std::cin && (answer == 0 || answer == 1)) {
				multipleRandomNumbers(num1, amount, unique);
				std::cout << "Another set of numbers?" << std::endl;
				std::cin >> answer;
			}
			else {
				std::cout << "Error wrong answer." << std::endl;
				break;
			}
		}
	}

	return 0;
}

