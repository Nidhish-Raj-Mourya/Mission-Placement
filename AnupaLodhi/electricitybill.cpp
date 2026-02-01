#include<iostream>
using namespace std;
int main(){
    int unit_consumed, rate_per_unit;
    cin >> unit_consumed >> rate_per_unit;
    float total_bill_amount;
    total_bill_amount = unit_consumed * rate_per_unit;
    cout << "Total Bill Amount:" << total_bill_amount << endl;
    return 0;
}