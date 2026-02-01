#include<iostream>
using namespace std;
int powerOfTen(int number){
    if(number==0){
        return 1;
    }
    if(number==1){
        return 10;
    }
    int power=1;
    for(int i=1;i<=number;i++){
    power*=10;
    }
    return power;
}
int removeSpecific(int number){
    int count=0;
    int newNumber=0;
    int digit=0;
    while(number!=0){
        digit=number%10;
        if(digit!=2){
        newNumber+=digit*powerOfTen(count);
        count++;
        }
        number=number/10;
    }
    cout<<newNumber;
}

int main(){
    int number;
    cout<<"Enter the number ";
    cin>>number;
    removeSpecific(number);
}