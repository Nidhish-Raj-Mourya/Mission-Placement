#include<iostream>
using namespace std;
int armstrongTillN(int number){
     int temp=number;
    int digit=0;
    int sum=0;
    while(number!=0){
    digit=number%10;
    sum=sum+digit*digit*digit;
    number=number/10;
    }
    if(temp==sum){
        cout<<temp<<" ";
    }
}
int main(){
    int number;
    cout<<"enter the number";
    cin>>number;
    int i=1;
    while(i<=number){
    armstrongTillN(i);
        i++;
    }    
    return 0;
}