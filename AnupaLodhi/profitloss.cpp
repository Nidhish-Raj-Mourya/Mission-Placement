#include<iostream>
using namespace std;
int main(){
    int cost_price, selling_price, profit, loss;
    cin >> cost_price >> selling_price;
    if(selling_price > cost_price)
        profit = selling_price - cost_price;
       { cout << "Profit:" << profit << endl;}
        else
        loss = cost_price - selling_price;
        {cout << "Loss:" << loss << endl;}

    return 0;
}