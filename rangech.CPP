#include <iostream>
using namespace std;

int main() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (number >= 1 && number <= 10) {
        cout << "1 - 10" << endl;
    } 
    else if (number >= 11 && number <= 50) {
        cout << " 11 - 50" << endl;
    } 
    else if (number >= 51 && number <= 100) {
        cout << "51 - 100" << endl;
    } 
    else if (number >= 101 && number <= 500) {
        cout << "101 - 500" << endl;
    } 
    else if (number >= 501 && number <= 1000) {
        cout << "501 - 1000" << endl;
    } 
    else if (number > 1000) {
        cout << "Above 1000" << endl;
    } 
    else {
        cout << "invalid" << endl;
    }

    return 0;
}