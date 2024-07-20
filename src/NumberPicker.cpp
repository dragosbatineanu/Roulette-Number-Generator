//libraries

#include <iostream>
#include <cstdlib>
#include <random>

//Headers

#include "Header.h"

void randomNumber(int num1) {

	int maxRange = --num1;
	int result;

	//We generate the random number here. Make sure static is in front so it doesn't generate a new seed everytime we call the function 
	static std:: random_device random; // this is to get a new seed from the hardware. if this isn't good it will generate the same random numbers everytime regardless if the program is ran again or not
	static std::default_random_engine generator(random());
	static std::uniform_int_distribution<int> distribution(0, num1);
	result = distribution(generator);

	//Console output
	std::cout << "Your random number is: " << std::endl;
	std::cout << result << std::endl;

}

void multipleRandomNumbers(int num1, int amount) {

	int numbers = amount;
	int maxRange = --num1;
	std::vector<int> result;

	for (int i = 0; i < numbers; i++) {
		//We generate the random number here. Make sure static is in front so it doesn't generate a new seed everytime we call the function 
		static std::random_device random; // this is to get a new seed from the hardware. if this isn't good it will generate the same random numbers everytime regardless if the program is ran again or not
		static std::default_random_engine generator(random());
		static std::uniform_int_distribution<int> distribution(0, num1);
		result.push_back(distribution(generator));
		}
		//Console output
	std::cout << "Your random number is: " << std::endl;

	for (int j : result){
		std::cout << j << " ";
	}

	std::cout << std::endl;
}