#include<iostream>
using namespace std;
int main(){
    float originalPrice,discountPercent,finalPrice;
    cout<<"Enter original price \n";
    cin>>originalPrice;
    cout<<"Enter discount percent \n";
    cin>>discountPercent;
    finalPrice=originalPrice-(discountPercent*originalPrice)/100.0;
    cout<<"Final Price is "<<finalPrice;
    return 0;
}