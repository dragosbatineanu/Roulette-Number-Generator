#include <iostream>
#include <cstdlib>

//Headers

#include "Header.h"

using namespace std;

int main() {

	int num1;

	cout << "Enter the range of numbers:" << endl;
	cout << "Highest number:" << endl;
	cin >> num1;
	num1 += 1;

	randomNumber(num1);
}

