#include <iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char operation;

    cout << "Simple Calculator\n";
    cout << "Enter first number: ";
    cin >> num1;

    cout << "Enter an operator (+): ";
    cin >> operation;

    cout << "Enter second number: ";
    cin >> num2;

    if (operation == '+') {
        result = num1 + num2;
        cout << "Result: " << result << endl;
    } else {
        cout << "Invalid operator. This calculator currently supports only addition.\n";
    }

    return 0;
}
