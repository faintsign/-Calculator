#include "MainApplication.h"
#include "Computations.h"
#include <iostream>

void displayMenu() {
	std::cout << "Welcome to my Calculator\n";
	std::cout << "- - - - - - - - - - - - - -\n";
	std::cout << "1. Addition\n";
	std::cout << "2. Subtraction\n";
	std::cout << "3. Multiplication\n";
	std::cout << "4. Division\n";
	std::cout << "5. Quit\n";
}

bool isVerified(bool state, int input, Computations o) {
	switch (input) {
		case 1:
			std::cout << o.add(o.getFirstNumber(), o.getSecondNumber());
			return true;

		case 2:
			std::cout << o.sub(o.getFirstNumber(), o.getSecondNumber());
			return true;

		case 3:
			std::cout << o.multi(o.getFirstNumber(), o.getSecondNumber());
			return true;

		case 4:
			std:: cout << o.div(o.getFirstNumber(), o.getSecondNumber());
			return true;

		case 5:
			return true;

		default:
			std::cout << "Operation not found\n";
			return false;
	}
}

int main() {
	Computations op;
	op.setFirstNumber(5);
	op.setSecondNumber(5);

	displayMenu();
	

	// Loop to verify
	bool* isRunning = new bool;
	int* value = new int;
	std::cout << "Please select an operation\n";
	std::cin >> *value;

	// Algorithm
	// 1. Get stdin
	// 2. Verify that the selection is valid
	// 3. If valid, go to the function and perform the computation
	// 3. While a selection is not valid, make them enter the correct input

	*isRunning = isVerified(*isRunning, *value, op);
	
	while (!*isRunning) {
		std::cout << "Please select a valid operation";
		std::cin >> *value;
		*isRunning = isVerified(*isRunning, *value, op);
	}

	return 0;
}
