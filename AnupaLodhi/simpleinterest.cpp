#include<iostream>
using namespace std;
int main(){
    int principal_amount, rate_of_interest, time_period;
    cin >> principal_amount >> rate_of_interest >> time_period;
    float simple_interest;
    simple_interest = (principal_amount * rate_of_interest * time_period) / 100;
    cout << "Simple Interest:" << simple_interest << endl;
    float total_amount = principal_amount + simple_interest;
    cout << "Total Amount:" << total_amount << endl;
    return 0;
}