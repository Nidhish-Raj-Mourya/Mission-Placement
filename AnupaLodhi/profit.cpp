#include<iostream>
using namespace std;
int main(){
    int cost_price, selling_price ;
    cin >> cost_price >> selling_price ;
    if(cost_price < selling_price)
    {cout << "Profit";}
    else if(cost_price == selling_price)
     {cout << "No Profit No Loss";}
    else if (cost_price > selling_price)
     {cout << "loss";}
     return 0;

}