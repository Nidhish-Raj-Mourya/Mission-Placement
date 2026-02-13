#include<iostream>
using namespace std;

int tribonacciSeries(int number){
    int next;
    int first=0,second=0,third=1;
    if(number>=1)
        cout<<first<<" ";
    if(number>=2)
        cout<<second<<" ";
    if(number>=3)
        cout<<third<<" ";
    
    for(int i=4;i<=number;i++){
        next=first+second+third;
        cout<<next<<" ";
        first=second;
        second=third;
        third=next;
    }
    return 0;
}

int main(){
    int number;

    cout<<"Enter the number : ";
    cin>>number;

    tribonacciSeries(number);
}