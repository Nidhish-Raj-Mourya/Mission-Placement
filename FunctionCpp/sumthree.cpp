#include<iostream>
using namespace std;
int addition(int a, int b) {
    return a + b;
}

int multiplication(int a, int b) {
    return a * b;
}

int subtraction(int a, int b) {
    return a - b;
}

int division(int a, int b) {
    if (b == 0) {
        cout << "Division by zero not allowed\n";
        return 0;
    }
    return a / b;
}

int main() {
    int a, b;
    cout << "Enter input1: ";
    cin >> a;
    cout << "Enter input2: ";
    cin >> b;

    int result;

    result = addition(a, b);
    cout << "Addition: " << result << endl;

    result = multiplication(a, b);
    cout << "Multiplication: " << result << endl;

    result = subtraction(a, b);
    cout << "Subtraction: " << result << endl;

    result = division(a, b);
    cout << "Division: " << result << endl;

    return 0;
}
