#include <iostream>
#include <cstdlib>

//Headers

#include "Header.h"

using namespace std;


void randomNumber(int num1) {

	int maxRange = num1;
	bool answer;
	double result;


	//Function for random number
	srand((unsigned)time(NULL));

	//Where we call & store our random number
	result = rand() % maxRange;

	//Console output
	cout << "Your random number is: " << endl;
	cout << result << endl;

	cout << "Another number?" << endl;
	cin >> answer;

		while (answer) {

			if (cin && (answer == 0 || answer == 1)) {
				randomNumber(num1);
				cout << "Another number?" << endl;
				int answer2;
				cin >> answer2;
			}
			else {
				cout << "Error wrong answer." << endl;
				break;
			}
		}

}