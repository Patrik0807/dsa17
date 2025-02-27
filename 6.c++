#include <iostream>
using namespace std;

void calculator(double a, char op, double b) {
    if (op == '+') cout << "Result: " << a + b << endl;
    else if (op == '-') cout << "Result: " << a - b << endl;
    else if (op == '*') cout << "Result: " << a * b << endl;
    else if (op == '/') {
        if (b == 0) cout << "Error: Division by zero is not allowed!" << endl;
        else cout << "Result: " << a / b << endl;
    } else {
        cout << "Invalid operator!" << endl;
    }
}

int main() {
    double a, b;
    char op;
    cout << "Enter two numbers and an operator (+, -, *, /): ";
    cin >> a >> op >> b;
    calculator(a, op, b);
    return 0;
}
