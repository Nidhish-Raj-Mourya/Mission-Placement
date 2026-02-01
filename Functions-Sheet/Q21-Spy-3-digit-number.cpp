#include<iostream>
using namespace std;
int spyNumber(int number){
    int variable1,variable2,variable3;
    variable1=number/100;
    variable2=(number/10)%10;
    variable3=number%10;
    int sum = variable1+variable2+variable3;
    int product = variable1*variable2*variable3;
    if(sum==product){
        cout<<"Spy number : ";
    }
    else{
        cout<<"Not Spy number : ";
    }
    return number;
    
}
int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    int result = spyNumber(number);
    cout<<result;
}