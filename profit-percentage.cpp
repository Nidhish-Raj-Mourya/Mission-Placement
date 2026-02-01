#include<iostream>
using namespace std;
int main(){
    float costPrice,sellingPrice,profitPercentage,profit;
    cout<<"Enter the cost price : ";
    cin>>costPrice;
    cout<<"Enter the selling price : ";
    cin>>sellingPrice;
    profit=sellingPrice-costPrice;
    profitPercentage=(profit/costPrice)*100;
    cout<<profitPercentage<<" % ";
}