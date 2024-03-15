#include <iostream>

using namespace std;

int main()
{
	//
	double num1, num2, result;
	char execute;

	//
	cout << "-------------------" << endl;
	cout << "Place the first number here: ";
	cin >> num1;
	cout << "Then put the second one here: ";
	cin >> num2;
	cout << "Choose between this symbol (+, -, *, /): ";
	cin >> execute;

	//
	switch (execute) {
	case '+':
		result = num1 + num2;
		break;
	case '-':
		result = num1 - num2;
		break;
	case '*':
		result = num1 * num2;
		break;
	case '/':
		result = num1 / num2;
		break;
	}

	cout << "Result: " << result << endl;
	cout << "-------------------" << endl;

	return 0;
}