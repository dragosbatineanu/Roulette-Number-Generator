#include <iostream>
#include <cstdlib>
using namespace std;

int main() {
	//Function for random number
	srand((unsigned) time(NULL));

	//Where we call & store our random number
	int result = rand() % 37;

	//Console output
	cout << "Your random number is: " << endl;
	cout << result;

}