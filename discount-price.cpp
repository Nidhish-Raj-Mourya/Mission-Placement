#include<iostream>
using namespace std;
int main(){
    int originalPrice,discount,discountPrice;
    float discountPercent;
    cout<<"Enter the original price : ";
    cin>>originalPrice;
    cout<<"Enter the discount percent : ";
    cin>>discountPercent;
    //discount should be 0 to 100
    discount=originalPrice*(discountPercent/100);
    cout<<discount<<endl;
    discountPrice=originalPrice-discount;
    cout<<discountPrice<<endl;
}