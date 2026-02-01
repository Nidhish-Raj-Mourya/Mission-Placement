#include<iostream>
using namespace std;
int divisor(int number){
    int i = 1;
    int sum = 0;
    while(i <=number){
        if(number%i==0){
            sum = sum +i;
        }
i++;

    }
    cout<<"sum is: "<<sum;
    return 0;
}
int main(){
    int number;
    cout<<"number: ";
    cin>>number;
    divisor(number);
    
return 0;
}