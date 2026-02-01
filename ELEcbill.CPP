#include<iostream>
using namespace std;
int main() {
    float units;
    float totalBill = 0.0;
    
    cout << " units consumed: ";
    cin>>units;
    if (units <= 100) {
        totalBill = units * 5;
    } else if (units <= 200) {
        
        totalBill = (100 * 5) + ((units - 100) * 7);
    } else if (units <= 300) {
        
        totalBill = (100 * 5) + (100 * 7) + ((units - 200) * 10);
    } else {
        
        totalBill = (100 * 5) + (100 * 7) + (100 * 10) + ((units - 300) * 15);
    }
    cout<< "Total electricity bill for " << units << " units is: ₹" <<totalBill;
        

    return 0;
}

