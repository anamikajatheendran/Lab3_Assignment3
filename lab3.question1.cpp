#include <iostream>
#include <cmath>
using namespace std;


int main() {
	
	double firstNumber, secondNumber;
	
	cout << "Enter your first number: ";
	cin >> firstNumber;
	
	cout << "Enter your second number: ";
	cin >> secondNumber;
	
	if (firstNumber < secondNumber) {
		cout << secondNumber << " is greater than " << firstNumber << ".";
	}
	
	else if (firstNumber > secondNumber) {
		cout << firstNumber << " is greater than " << secondNumber << ".";
	}
	
	else {
		cout << "Both the numbers are equal.";
	}
	
	cout << endl;
	
	return 0;
}
