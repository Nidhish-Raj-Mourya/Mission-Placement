#include<iostream>
using namespace std;
int product(int num){
    int digit;
    int multiple = 1;
    if(1<=num&&1000000000<=num){
    for(int i =0;i<=num;i++){
        digit = num%10;
        multiple = multiple*digit;
        num = num/10;
    }
}
    cout<<"The product is: "<<multiple;

    return 0;
}
int main(){
    int number;

    cout<<"Enter the number: ";
    cin>>number;

    product(number);



    return 0;
}