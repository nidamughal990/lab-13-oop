
#include <iostream>
#include <stdexcept>
using namespace std;

class Calculator {
public:
    double calculate(double num1, double num2, char operation) {
        switch (operation) {
            case '+':
                return num1 + num2;
            case '-':
                return num1 - num2;
            case '*':
                return num1 * num2;
            case '/':
                if (num2 == 0) {
                    throw runtime_error("Error: Division by zero!");
                }
                return num1 / num2;
            default:
                throw invalid_argument("Error: Invalid operation!");
        }
    }
};

int main() {
    Calculator calc;
    double num1, num2;
    char operation;

    cout << "Enter first number: ";
    cin >> num1;
    cout << "Enter operation (+, -, *, /): ";
    cin >> operation;
    cout << "Enter second number: ";
    cin >> num2;

    try {
        double result = calc.calculate(num1, num2, operation);
        cout << "Result: " << result <<endl;
    } catch (const std::exception& e) {
        cout<< e.what() <<endl;
    }

    return 0;
}