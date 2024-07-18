#include <iostream>
#include <cstdlib>
#include <random>

//Headers

#include "Header.h"


/*Try to call the function without a seed and alternate between them?*/

void randomNumber(int num1) {

	int maxRange = num1;
	int result;
	num1--;

	/*Old way of generating randomness
	srand((unsigned)time(NULL));
	result = rand() % maxRange;
	*/

	//We generate the random number here. Make sure static is in front so it doesn't generate a new seed everytime we call the function 
	static std:: random_device random; // this is to get a new seed from the hardware. if this isn't good it will generate the same random numbers everytime regardless if the program is ran again or not
	static std::default_random_engine generator(random());
	static std::uniform_int_distribution<int> distribution(0, num1);
	result = distribution(generator);

	//Console output
	std::cout << "Your random number is: " << std::endl;
	std::cout << result << std::endl;


}