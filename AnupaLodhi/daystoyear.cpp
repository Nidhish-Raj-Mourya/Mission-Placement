#include<iostream>
using namespace std;
int main(){
    int days , years, weeks,remaining_days;
    cin>> days;
    years = days / 365;
    cout << "Years:"<<years<<endl;
    weeks = (days % 365) / 7;
    cout << "Weeks:"<<weeks<<endl;
    remaining_days =(days % 365) % 7;
    cout <<"Remaining Days:"<< years <<weeks<<endl;
    return 0;
}