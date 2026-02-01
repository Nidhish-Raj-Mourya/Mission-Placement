#include<iostream>
using namespace std;
int main(){
    float unit, rate , total_bill;
    cin >> unit >> rate >> total_bill;
    if(unit >= 0 && unit <= 100)
    {

        cout << "Rate is 5.0" << endl;
    }
    else if(unit >= 101 && unit <= 200)
    {
      cout << "Rate is 7.0" << endl;
    }
    else if(unit >= 201 && unit <= 300)
    {
        cout << "Rate is 10.0" << endl;
    
    }
    else if(unit >= 300)
    {
        cout << "Rate is 15.0" << endl;
    }
    total_bill = unit * rate;
    cout << "Total Bill Amount:" << total_bill << endl;
    return 0;
}