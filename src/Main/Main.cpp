#include <iostream>
#include <cstdlib>

#include "../Header/NumberPicker.h"
#include "../Header/Strings.h"


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
				singleNumber(highestNumber);

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

	return 0;
}

