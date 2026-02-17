#include<iostream>
using namespace std;
int checkPerfectNumber(int number){
    int actualnumber = number;
    int sumofproperdivisor = 0;
    for(int i = 1; i<number; i++){
        if(number % i == 0){
            
            sumofproperdivisor = sumofproperdivisor + i;    
        }
    }
    if(sumofproperdivisor == actualnumber){
            cout<<"Perfect Number "<<endl;
        
        }
        else
        {
            cout<<"Not a perfect number "<<endl;
        
        }
    return 0;
}
int main(){
    int number;
    cout<<"Enter a number ";
    cin>>number;
    checkPerfectNumber(number);
    return 0;
}