#include <iostream>
#include <cstdlib>

//Headers

#include "Header.h"

using namespace std;

int main() {

	bool running = true;
	double num1;
	bool answer;

	cout << "Enter the range of numbers:" << endl;
	cout << "Highest number:" << endl;
	cin >> num1;
	num1 += 1;

	randomNumber(num1);

	cout << "Another number?" << endl;
	cin >> answer;

		while (running == true) {

		if (answer == true) {
			randomNumber(num1);
		}
		else {
			break;
		}
	}

}