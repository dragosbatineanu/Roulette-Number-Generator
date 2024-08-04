#include <iostream>
#include <cstdlib>

#include "NumberPicker.h"
#include "Strings.h"


int main() {

	//declaration of variables
	int highestNumber;
	int amountNumbers;
	int option;

	bool answer = true;
	bool unique;

	//CLI Menu
	std::cout << s_nameMessage << std::endl;
	std::cout << s_breakerHorizontal << std::endl;
	std::cout << s_singleNumber << std::endl;
	std::cout << s_MultipleNumber << std::endl;
	std::cout << s_exit << std::endl;
	std::cin >> option;
	std::cout << s_breakerHorizontal << std::endl;

	switch (option) 
	{
		case 1:
				std::cout << s_highestNumbers << std::endl;
				std::cin >> highestNumber;

				while (answer)
				{

					if (std::cin && (answer == 0 || answer == 1))
					{
						randomNumber(highestNumber);
						std::cout << "Another number?" << std::endl;
						std::cin >> answer;
					}
					else
					{
						std::cout << "Error wrong answer." << std::endl;
						break;
					}
				}
			//}

		case 2:
				std::cout << s_rangeNumbers << std::endl;
				std::cout << s_highestNumbers << std::endl;
				std::cin >> highestNumber;
				std::cout << s_amountNumbers << std::endl;
				std::cin >> amountNumbers;
				std::cout << "Do they need to be unique numbers?" << std::endl;
				std::cin >> unique;
				uniqueNumbers(highestNumber, amountNumbers, unique);
		case 3:
			return 0;
	}

	//Strings.h contains those strings
	//std::cout << s_rangeNumbers << std::endl;
	//std::cout << s_highestNumbers << std::endl;
	//std::cin >> highestNumber;
	//std::cout << s_amountNumbers << std::endl;
	//std::cin >> amountNumbers;


	//if (amountNumbers == 1) {
	//	while (answer) {
	//		if (std::cin && (answer == 0 || answer == 1)) {
	//			randomNumber(highestNumber);
	//			std::cout << "Another number?" << std::endl;
	//			std::cin >> answer;
	//		}
	//		else {
	//			std::cout << "Error wrong answer." << std::endl;
	//			break;
	//		}
	//	}
	//}

	//if (amountNumbers > 1) {
	//	std::cout << "Do they need to be unique numbers?" << std::endl;
	//	std::cin >> unique;
	//	uniqueNumbers(highestNumber, amountNumbers, unique);
	//}



	return 0;
}

