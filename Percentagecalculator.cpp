#include <iostream>
using namespace std;

int main() {
    int subject1, subject2, subject3, total;
    float percentage;

   
    cout << "Enter marks in Subject1: ";
    cin >> subject1;
    cout << "Enter marks in Subject2: ";
    cin >> subject2;
    cout << "Enter marks in Subject3: ";
    cin >> subject3;

    total = subject1 + subject2 + subject3;
    percentage = (total / 300.0) * 100;

    cout << "\nTotal Marks (out of 300): " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;

    return 0;
}