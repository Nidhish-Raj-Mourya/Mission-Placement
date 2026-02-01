#include<iostream>
using namespace std;
int main(){
    int waterUsage,cost;
    cout<<"Enter the water usage : ";
    cin>>waterUsage;
    if(waterUsage>0 and waterUsage<=5000){
        if(waterUsage<3000){
            cost=waterUsage*2;
            int discount=(cost*15)/100;
            cout<<discount<<endl;
            int actualAmount = cost-discount;
            cout<<actualAmount;
        }
        else{
            cost=waterUsage*2;
            cout<<cost;
        }
    }
    else if(waterUsage>=5001 and waterUsage<=10000){
        cost=waterUsage*3;
            cout<<cost;
    }
    else{
        cost=waterUsage*5;
            cout<<cost;
    }
}