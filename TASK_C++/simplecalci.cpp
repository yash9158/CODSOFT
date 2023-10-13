#include <iostream>
using namespace std;

int main() {
    char operation;
    double num1, num2, result;

    cout << "Enter operator (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (operation) {
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
            if (num2 != 0) {
                result = num1 / num2;
            } else {
                cout << "Error: Division by zero is not allowed.";
                return 1;
            }
            break;
        default:
            cout << "Invalid operator!";
            return 1;
    }

    cout << "Result: " << result << endl;
    return 0;
}
