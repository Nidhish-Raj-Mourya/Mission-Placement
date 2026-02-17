#include<iostream>
using namespace std;
int countOccurence(int number, int digit){
    
    int originalDigit;
    
    int count=0;
    
    while(number != 0){
        
        originalDigit = number % 10;
        
        number = number / 10;
       
        originalDigit = number%10;
       
        if(originalDigit == digit)
      
        {
        
            count++;
       
        }
    
    }
    
    cout<<count<<endl;
    
    return 0;

    }

int main(){
    int number ,digit;
    cout<<"Enter a number ";
    cin>>number;
    cout<<"Enter a digit ";
    cin>>digit;
    countOccurence(number,digit);
    return 0;
}