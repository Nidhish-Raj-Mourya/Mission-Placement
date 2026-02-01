#include<iostream>
using namespace std;
int countSpecific(int number,int specific){
    int count=0;
    int digit=0;
    while(number!=0){
        digit=number%10;
        if(digit==specific){
        count++;
        }
        number=number/10;
    }
    cout<<"Number has appeared "<<count<<" times.";
}

int main(){
    int number,specific;
    cout<<"Enter the number ";
    cin>>number;
    cout<<"Enter specific ";
    cin>>specific;
    countSpecific(number,specific);
}