#include<iostream>
using namespace std;
int specificDigit(int number, int digit){
    int originalDigit;
    while(number != 0){
       originalDigit = number%10;
        
       if(originalDigit == digit)
       {

            cout<<" Yes "<<endl;
                break;
       }
    
     number = number / 10;
    }
    
    return 0;
}
int main(){
    int number,digit ;
    cout<<"Enter a number : ";
    cin>>number;
    cout<<"Enter a digit : "<<endl;
    cin>>digit;

   specificDigit(number,digit);
   return 0; 


}