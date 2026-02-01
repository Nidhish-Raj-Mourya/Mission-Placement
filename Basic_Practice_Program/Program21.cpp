#include<iostream>
using namespace std;
int main(){
    float costPrice,sellingPrice,profit,loss;
    cout<<"Enter Cost Price \n";
    cin>>costPrice;
    cout<<"Enter Selling Price \n";
    cin>>sellingPrice;
    if(costPrice==sellingPrice){ 
        cout<<"No Profit No Loss";
    }
    if(costPrice>sellingPrice){
        loss=costPrice-sellingPrice;
        cout<<"The Loss is "<<loss<<"\n";
    }
    if(costPrice<sellingPrice){
        profit=sellingPrice-costPrice;
        cout<<"The Profit is "<<profit<<"\n";
    }
    return 0;
}