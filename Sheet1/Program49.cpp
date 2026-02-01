#include<iostream>
using namespace std;
int primeFact(int number){
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
    
        }
    }
    return 0;
}
int main(){
    int number;
    cout<<"enter the number";
    cin>>number;
    primeFact(number);
    return 0;
}