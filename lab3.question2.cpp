#include <iostream>
using namespace std;


int main() {
	
	//Defining variables and assigning values
	
	double firstNumber, secondNumber, thirdNumber;
	
	cout << "Enter your first number: ";
	cin >> firstNumber;
	cout << "Enter your second number: ";
	cin >> secondNumber;
	cout << "Enter your third number: ";
	cin >> thirdNumber;
	
	//Comparing values
	
	if (firstNumber > secondNumber) {
		if (thirdNumber > firstNumber) {
			cout << thirdNumber << " is the maximum of these three given numbers.";
		}
		else {
			cout << firstNumber << " is the maximum of these three given numbers.";
		}
		
	}
	
	else {
		if (thirdNumber > secondNumber) {
			cout << thirdNumber << " is the maximum of these three given numbers.";
		}
		else {
			cout << secondNumber << " is the maximum of these three given numbers.";
		}
	}
	
	cout << endl;
	
	return 0;
}
