#include<iostream>
using namespace std;
int neonNumber(int number){
    if(number>=0 and number<=9){
        int square = number*number;
        int variable1= square/10;
        int variable2= square%10;
        int sum=variable1+variable2;
        if(number==sum){
            cout<<"Neon number : ";
        }
        else{
            cout<<"Not Neon number : ";
        }
        
    }
    else{
        cout<<"Not a Single Digit number : ";
    }
    return number;
}

int main(){
    int number;
    cout<<"Enter the single digit number : ";
    cin>>number;
    int result = neonNumber(number);
    cout<<result;
}