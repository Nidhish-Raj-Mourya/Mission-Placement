#include<iostream>
using namespace std;

int evenOdd(int number){
    int even=0,odd=0;
    for(int i=0;i<=number;i++){
        if(i%2==0){
            even=even+i;
        }
        
        else{
            odd=odd+i;
        }
    
        
        
    }
    cout<<"Even : "<<even<<" Odd : "<<odd;
    return 0;
}

int main(){
    int number;

    cout<<"Enter the number : ";
    cin>>number;

    evenOdd(number);

}