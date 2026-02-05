#include<iostream>
using namespace std;

int divisor(int num){
    int pair = 1;
   for(int i=1;i<(num/2);i++){
    if(num%i==0){
    pair = num/i;
    cout<<"("<<i<<","<<pair<<")"<<endl;
   }
}
  
   return 0;
}
int main(){
    int number;

    cout<<"Enter the number: ";
    cin>>number;

    divisor(number);

    return 0;

}