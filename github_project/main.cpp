#include <iostream>
using namespace std;

int main()
{
	char operation;
	float number1, number2;

	cout << "Enter an operation (+, -, *, /): ";
	cin >> operation;

	cout << "Enter two numbers: ";
	cin >> number1 >> number2;

	switch (operation)
	{
	case '+':
		cout << number1 << " + " << number2 << " = " << number1 + number2;
		break;
	case '-':
		cout << number1 << " - " << number2 << " = " << number1 - number2;
		break;
	case '*':
		cout << number1 << " * " << number2 << " = " << number1 * number2;
		break;
	case '/':
		cout << number1 << " / " << number2 << " = " << number1 / number2;
		break;
	default:
		// Otherwise - entered operation is not one of these {+, -, *, /}
		cout << "ERROR!...";
		break;
	}

	return 0;
}