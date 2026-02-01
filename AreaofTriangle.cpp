#include <iostream>
using namespace std;

int main() {
    float base, height, area;

    cout << "Enter base of the triangle: ";
    cin >> base;
    cout << "Enter height of the triangle: ";
    cin >> height;

    area = (base * height) / 2;

    cout << "\nArea of the triangle = " << area << endl;

    return 0;
}
