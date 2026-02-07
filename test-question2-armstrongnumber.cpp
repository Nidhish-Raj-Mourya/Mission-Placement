#include<iostream>
using namespace std;
length(int num){
    int digit,count = 0;
    while(num!=0){
        digit = num%10;
        count++;
        num = num/10;
    }
    return count;
}
int power(int exponent){
 
}
int armstrong(int num){
    
    

}
int main(){
    int number;

    cout<<"The number is: ";
    cin>>number;

    armstrong(number);

    return 0;
}