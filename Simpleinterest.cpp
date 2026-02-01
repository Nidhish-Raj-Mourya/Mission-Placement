#include <iostream>
using namespace std;

int main() {
    float P, R, T, SI;
    cout << "Enter Principal amount: ";
    cin >> P;
    cout << "Enter Rate of Interest (per year): ";
    cin >> R;
    cout << "Enter Time (in years): ";
    cin >> T;

    SI = (P * R * T) / 100;

    cout << "Simple Interest = " << SI << endl;

    return 0;
}