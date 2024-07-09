// calc cpp
//basic calculator on cpp

#include <iostream>
using namespace std;

float add(float a, float b) {
	cout << a << "+" << b << " = " << a + b;
	return 0;
}
float subtract(float a, float b) {
	cout << a << "-" << b << " = " << a - b;
	return 0;
}
float multiply(float a, float b) {
	cout << a << "*" << b << " = " << a * b;
	return 0;
}
float divide(float a, float b) {
	if (b != 0) {
		cout << a << "/" << b << " = " << a / b;
	}
	else {
		cout << a << "/" << b << " = not defined";
	}
	return a / b;
}
float exponent(float a, float b) {
	cout << a << "^" << b << " = " << pow(a,b);
	return pow(a, b);
}
int main() {
	char op;
	float num1;
	float num2;
	cout << "-----CALCULATOR MENU-----\n";
	cout << "A to add\nS to subtract\nM to multiply\nD to divide\nE for exponent\nQ to quit";
	while (true) {
		cout << "\n\nEnter operation letter: ";
		cin >> op;
		if (op == 'a' or op == 'A') {
			cout << "Enter first operand: ";
			cin >> num1;
			cout << "Enter second operand: ";
			cin >> num2;
			add(num1, num2);
		}
		else if (op == 's' or op == 'S'){
			cout << "Enter first operand: ";
				cin >> num1;
				cout << "Enter second operand: ";
				cin >> num2;
				subtract(num1, num2);
		}
		else if (op == 'm' or op == 'M') {
			cout << "Enter first operand: ";
			cin >> num1;
			cout << "Enter second operand: ";
			cin >> num2;
			multiply(num1, num2);
		}
		else if (op == 'd' or op == 'D') {
			cout << "Enter first operand: ";
			cin >> num1;
			cout << "Enter second operand: ";
			cin >> num2;
			divide(num1, num2);
		}
		else if (op == 'e' or op == 'E') {
			cout << "Enter first operand: ";
			cin >> num1;
			cout << "Enter second operand: ";
			cin >> num2;
			exponent(num1, num2);
		}
		else if (op == 'q' or op == 'Q') {
			cout << "Leaving calculator, thank you!";
			break;
		}
		else {
			cout << "Invalid input, try again";
		}
	}
	return 0;
}