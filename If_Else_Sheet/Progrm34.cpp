#include<iostream>
using namespace std;
int main(){
    float income,ratePercent,rateAmount;
    cout<<"enter income ";
    cin>>income;
    if(income<250000){
        cout<<"no tax";
    }
    if(250000<income&&income<500000){
        ratePercent=5;
        rateAmount=(income*ratePercent)/100;
        cout<<"Rate Amount is "<<rateAmount;
    }
    if(500000<income&&income<1000000){
        ratePercent=20;
        rateAmount=(income*ratePercent)/100;
        cout<<"Rate Amount is "<<rateAmount;
    }
    if(1000000<income){
        ratePercent=30;
        rateAmount=(income*ratePercent)/100;
        cout<<"Rate Amount is "<<rateAmount;
    }
    return 0;

}