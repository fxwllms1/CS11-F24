#include <iostream>

using namespace std;

int main() {
	double number1;
	cout << "Enter the first number: ";
	cin >> number1;
	
	string op_symbol; // the operator e.g. + - / *
	cout << "Which operation? (* / + -): ";
	cin >> op_symbol;

	double number2;
	cout << "Enter the second number: ";
	cin >> number2;

	double result; // set result equal to your answer

	//-------------------- YOUR CODE BELOW -------------------------

	if (op_symbol[0] == '+') {
		result = number1 + number2; 
	}

	else if (op_symbol[0] == '-') {
		result = number1 - number2; 
	}

	else if (op_symbol[0] == '*') {
		result = number1 * number2; 
	}

	else if (op_symbol[0] == '/') {
		result = number1 / number2; 
	}



	//-------------------- YOUR CODE ABOVE -------------------------
	

	cout << "Result is: " << result << "." << endl;

	return 0;
}