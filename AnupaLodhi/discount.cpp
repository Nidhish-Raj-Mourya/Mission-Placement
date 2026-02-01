#include<iostream>
using namespace std;
int main(){
    int original_price, discount_percentage;
    cin >> original_price >> discount_percentage;
    float discount_amount;
    discount_amount = (original_price * discount_percentage) / 100.0;
    cout << "Discount Amount:" << discount_amount << endl;
    float final_price = original_price - discount_amount;
    cout << "Final Price after Discount:" << final_price << endl;
    return 0;
}