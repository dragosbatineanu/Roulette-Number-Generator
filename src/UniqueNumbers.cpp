#include <iostream>

#include "NumberPicker.h"

void uniqueNumbers(int num1, int num2, bool uniq) {
	bool unique = uniq;
	bool answer = true;

	while (answer) {
		if (std::cin && (answer == 0 || answer == 1)) {
			multipleRandomNumbers(num1, num2, unique);
			std::cout << "Another set of numbers?" << std::endl;
			std::cin >> answer;
		}
		else {
			std::cout << "Error wrong answer." << std::endl;
			break;
		}
	}
}