#include <iostream>
using namespace std;

int main() {
    double P, R, T, SI;

    // Input principal, rate, and time
    cout << "Enter principal amount: ";
    cin >> P;
    cout << "Enter rate of interest: ";
    cin >> R;
    cout << "Enter time (in years): ";
    cin >> T;

    // Calculate simple interest
    SI = (P * R * T) / 100;

    // Display result
    cout << "Simple Interest = " << SI << endl;

    return 0;
}
