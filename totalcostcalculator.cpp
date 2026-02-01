#include <iostream>
using namespace std;

int main() {
    double price, quantity, taxPercent;
    double subtotal, taxAmount, total;

    cout << "Enter price of item: ";
    cin >> price;
    cout << "Enter quantity: ";
    cin >> quantity;
    cout << "Enter tax percentage: ";
    cin >> taxPercent;

    subtotal = price * quantity;

    taxAmount = (subtotal * taxPercent) / 100;

    total = subtotal + taxAmount;

    cout << "Subtotal = " << subtotal << endl;
    cout << "Tax Amount = " << taxAmount << endl;
    cout << "Total Amount = " << total << endl;

    return 0;
}
