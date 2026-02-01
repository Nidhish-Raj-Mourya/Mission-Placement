#include<iostream>
using namespace std;
int main(){
    int loan_amount, monthly_interest_rate, number_of_months;
    cin >> loan_amount >> monthly_interest_rate >> number_of_months;
    float emi;
    emi = (loan_amount / number_of_months) + ((loan_amount * monthly_interest_rate) / 100);
    cout << "EMI:" << emi << endl;
    return 0;
}