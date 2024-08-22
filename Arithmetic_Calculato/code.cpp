#include <iostream>

using namespace std;

void add(double, double);
void subtract(double, double);
void multiply(double, double);
void divide(double, double);

int main() {
    double num1, num2;
    char operation;

    cout << "Simple Arithmetic Calculator\n";
    cout << "Enter an operation (+, -, *, /): ";
    cin >> operation;

    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    switch (operation) {
        case '+':
            add(num1, num2);
            break;
        case '-':
            subtract(num1, num2);
            break;
        case '*':
            multiply(num1, num2);
            break;
        case '/':
            if (num2 != 0) {
                divide(num1, num2);
            } else {
                cout << "Error: Division by zero is not allowed.\n";
            }
            break;
        default:
            cout << "Invalid operation.\n";
            break;
    }

    return 0;
}

void add(double num1, double num2) {
    cout << "Result: " << num1 + num2 << endl;
}

void subtract(double num1, double num2) {
    cout << "Result: " << num1 - num2 << endl;
}

void multiply(double num1, double num2) {
    cout << "Result: " << num1 * num2 << endl;
}

void divide(double num1, double num2) {
    cout << "Result: " << num1 / num2 << endl;
}
