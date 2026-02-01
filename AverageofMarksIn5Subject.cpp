#include <iostream>
using namespace std;

int main() {
    float m1, m2, m3, m4, m5;
    float total, Percentage;

    cout << "Enter marks of 5 subjects:";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    Percentage = (total/500)*100;

    cout << "Total Marks (out of 500): = " << total << endl;
    cout <<"Percentage Marks ="<< Percentage << "%" <<endl;

    return 0;
}

