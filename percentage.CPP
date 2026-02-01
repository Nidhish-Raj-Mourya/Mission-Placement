#include<iostream>
using namespace std;
int main(){
    float number1,number2,number3;
    float percentage;
    cout<<"The number1 is: ";
    cin>>number1;
    cout<<"The number2 is: ";
    cin>>number2;
    cout<<"The number3 is: ";
    cin>>number3;
    percentage = ((number1+number2+number3)/300)*100;
    cout<<"The percentage is "<<percentage;
    return 0;
}

