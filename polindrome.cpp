#include<iostream>
using namespace std;
int palindrome(int number){
    int temp=number;
    int digit = 0;
    int reverse=0;
    while(number != 0)
    {
    digit = number%10;
     reverse = reverse * 10 + digit;
    number = number /10 ;
}

    if(temp == reverse){

    cout<<"It is a palindrome "<<reverse<<endl;
    
    }
    else
    {
        cout<<"It is not a palindrome "<<reverse<<endl;
    }
    return 0;
}


  
int main(){
    int number;
    cout<<"Enter a number ";
    cin>>number;
    palindrome(number);
    return 0;
}