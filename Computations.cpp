#include "Computations.h"
Computations::Computations() {
	*a = 0;
	*b = 0;
}

Computations::Computations(int x, int y) {
	*a = x;
	*b = y;
}

// Accessor definition
int Computations::getFirstNumber() {
	return *a;
}

int Computations::getSecondNumber() {
	return *b;
}

// Modifier methods
void Computations::setFirstNumber(int data) {
	*a = data;
}

void Computations::setSecondNumber(int data) {
	*b = data;
}

// Operation definitions
int Computations::add(int a, int b) {
	return (a + b);
}

int Computations::sub(int a, int b) {
	return (a - b);
}

int Computations::multi(int a, int b) {
	return (a * b);
}

int Computations::div(int a, int b) {
	return (a / b);
}

