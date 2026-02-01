#include<iostream>
using namespace std;
int countEven(int firstNumber)
{
    int variable1,variable2,variable3,variable4,count=0;
    variable1=firstNumber/1000;
    variable2=(firstNumber/100)%10;
    variable3=(firstNumber/10)%10;
    variable4=firstNumber%10;
    if(variable1%2==0){
        count++;
    }
    if(variable2%2==0){
        count++;
    }
    if(variable3%2==0){
        count++;
    }
    if(variable4%2==0){
        count++;
    }
    else{
        cout<<"No even no. ";
    }

    return count;
}
int main(){
    int number1;
    cout<<"Enter the number : ";
    cin>>number1;
    int result = countEven(number1);
    cout<<result;
}