#include <iostream>
#include <cstdlib>

//Headers

#include "Header.h"

using namespace std;


void randomNumber(int num1) {

	int maxRange = num1;
	double result;

	//Function for random number
	srand((unsigned)time(NULL));

	//Where we call & store our random number
	result = rand() % maxRange;

	//Console output
	cout << "Your random number is: " << endl;
	cout << result << endl;
}