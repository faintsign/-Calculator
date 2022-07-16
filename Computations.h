#pragma once
class Computations
{
	// Private instance variables
	int* a = new int;
	int* b = new int;

public:
	// Constructors
	Computations();
	Computations(int x, int y);

	// Accessor declaration
	int getFirstNumber();
	int getSecondNumber();

	// Modifier declaration
	void setFirstNumber(int data);
	void setSecondNumber(int data);

	// Operations
	int add(int a, int b);
	int sub(int a, int b);
	int multi(int a, int b);
	int div(int a, int b);

}; 