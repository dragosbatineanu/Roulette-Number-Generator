//libraries

#include <iostream>
#include <cstdlib>
#include <random>
#include <algorithm> 
#include <vector> 

//Headers

#include "../Header/NumberPicker.h"



//This is for 1 number
void randomNumber(int num1) {



	//num1 is the maximum number allowed
	int maxRange = --num1; //we -- it because for some reason it goes up num+1
	int result;

	//We generate the random number here
	static std::random_device random; // this is to get a new seed from the hardware. if this isn't good it will generate the same random numbers everytime regardless if the program is ran again or not
	static std::default_random_engine generator(random());
	static std::uniform_int_distribution<int> distribution(0, num1);
	result = distribution(generator);

	//Console output
	std::cout << "Your random number is: " << std::endl;
	std::cout << result << std::endl;

}

//This is for multiple numbers
void multipleRandomNumbers(int num1, int amount, bool uniq) {

	int numbers = amount;
	int maxRange = --num1;
	std::vector<int> result;
	bool nrUnique = uniq;

	if(!nrUnique){
	for (int i = 0; i < numbers; i++) {
		//We generate the random number here. Make sure static is in front so it doesn't generate a new seed everytime we call the function 
		static std::random_device random; // this is to get a new seed from the hardware. if this isn't good it will generate the same random numbers everytime regardless if the program is ran again or not
		static std::default_random_engine generator(random());
		static std::uniform_int_distribution<int> distribution(0, num1);
		result.push_back(distribution(generator));
		//Console output
	}
	std::cout << "Your random numbers are: " << std::endl;
	for (int j : result){
		std::cout << j << " ";
	}
	std::cout << std::endl;

	}

	//---------------------------------------------------------------------------------------------------------------------------
	//For Unique numbers

	if(nrUnique) {

	for (int i = 0; i < numbers; i++) {
		//We generate the random number here. Make sure static is in front so it doesn't generate a new seed everytime we call the function 
		static std::random_device random; // this is to get a new seed from the hardware. if this isn't good it will generate the same random numbers everytime regardless if the program is ran again or not
		static std::default_random_engine generator(random());
		static std::uniform_int_distribution<int> distribution(0, num1);
		result.push_back(distribution(generator));

	}
	//we sort and delete duplicate numbers
	std::sort(result.begin(), result.end());
	auto duplicates = unique(result.begin(), result.end());
	result.erase(duplicates, result.end());

	//if there are less than amount, we need to add new numbers
	while (result.size() < numbers || result.size() > numbers) {
		for (int i = 0; i < numbers; i++) {
			//We generate the random number here. Make sure static is in front so it doesn't generate a new seed everytime we call the function 
			static std::random_device random; // this is to get a new seed from the hardware. if this isn't good it will generate the same random numbers everytime regardless if the program is ran again or not
			static std::default_random_engine generator(random());
			static std::uniform_int_distribution<int> distribution(0, num1);
			result.push_back(distribution(generator));
		}
		//we sort and delete duplicate numbers
		std::sort(result.begin(), result.end());
		auto duplicates = unique(result.begin(), result.end());
		result.erase(duplicates, result.end());
	}

	std::cout << "Your random unique numbers are: " << std::endl;
	for (int j : result) {
		std::cout << j << " ";
	}
	std::cout << std::endl;
	}

	std::cout << std::endl;
	}
