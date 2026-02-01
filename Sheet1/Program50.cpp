#include<iostream>
using namespace std;
int sumeNumber(int number){
    int count=0;
    if(number==0)
        {
            return 0;
        }
    if(number==1){
        return 1;
    }
    for(int i=2;number>=i;i++){
        while(number%i==0){
            cout<<i<<" ";
            number=number/i;
            count++;
    
        }
    }
    cout<<"The number of factors are "<<count; 
    return 0;
}
int main(){
    int number;
    cout<<"enter the number";
    cin>>number;
    sumeNumber(number);
    return 0;
}