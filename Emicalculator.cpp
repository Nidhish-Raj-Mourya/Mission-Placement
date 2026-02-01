#include <iostream>
using namespace std;

int main() {
    double loanAmount, interestRate, months, EMI;

    // Input loan details
    cout << "Enter loan amount: ";
    cin >> loanAmount;
    cout << "Enter monthly interest rate (in %): ";
    cin >> interestRate;
    cout << "Enter number of months: ";
    cin >> months;

    // Calculate EMI
    EMI = (loanAmount / months) + (loanAmount * interestRate / 100);

    // Display result
    cout << "Approximate Monthly EMI = " << EMI << endl;

    return 0;
}
