#include<iostream>
using namespace std;
int main(){
    int number=9474;
    int even=0,odd=0;
    int evenSum=((number%100)/10)+(number%10);
    int oddSum=(number/1000)+((number/10)%10);
    
    cout<<(evenSum==oddSum);
    return 0;
}