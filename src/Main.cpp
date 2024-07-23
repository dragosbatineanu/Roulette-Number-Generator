#include <iostream>
#include <cstdlib>

#include "NumberPicker.h"


int main() {

	//declaration of variables
	int highestNumber;
	int amountNumbers;
	bool answer = true;
	bool unique;


	std::cout << "Enter the range of numbers:" << std::endl;
	std::cout << "Highest number:" << std::endl;
	std::cin >> highestNumber;
	std::cout << "How many numbers?" << std::endl;
	std::cin >> amountNumbers;
	std::cout << "Do they need to be unique numbers?" << std::endl;
	std::cin >> unique;

	if (amountNumbers == 1) {
		while (answer) {
			if (std::cin && (answer == 0 || answer == 1)) {
				randomNumber(highestNumber);
				std::cout << "Another number?" << std::endl;
				std::cin >> answer;
			}
			else {
				std::cout << "Error wrong answer." << std::endl;
				break;
			}
		}
	}

	if (amountNumbers > 1) {
		uniqueNumbers(highestNumber, amountNumbers, unique);
	}



	return 0;
}

