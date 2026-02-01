#include<iostream>
using namespace std;
int Harshad(int number){
    int variable1,variable2,variable3;
    variable1=number/100;
    variable2=(number/10)%10;
    variable3=number%10;
    int sum = variable1+variable2+variable3;
    if(number%sum==0){
        cout<<"Harshad Number : ";
    }
    else{
        cout<<"Not Harshad Number : ";
    }
    return sum;
}

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    int result = Harshad(number);
    cout<<result;

}