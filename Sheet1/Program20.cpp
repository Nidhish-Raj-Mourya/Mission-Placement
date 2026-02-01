#include<iostream>
using namespace std;
int sumOddEven(int number){
    int sumOdd=0,sumEven=0;
    int i=0;
    while(number>=i){
        if(i%2==0){
            sumEven+=i;
        }
        else{
            sumOdd+=i;
        }
        i++;
    }
    cout<<"Sum of Even terms is "<<sumEven<<"\n";
    cout<<"Sum of Odd terms is "<<sumOdd;
}
int main(){
    int number;
 cout<<"Enter the number";
 cin>>number;
 sumOddEven(number);
}