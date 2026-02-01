#include <iostream>
using namespace std;

int main() {
    int days, years, weeks, remainingDays;

    cout << "Enter total number of days: ";
    cin >> days;

    years = days / 365;                 
    weeks = (days % 365) / 7;           
    remainingDays = (days % 365) % 7;   

    cout << "\nYears: " << years;
    cout << "\nWeeks: " << weeks;
    cout << "\nDays: " << remainingDays << endl;

    return 0;
}


