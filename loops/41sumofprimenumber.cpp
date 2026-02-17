#include<iostream>
using namespace std;
int primeNumber(int number){
    int i=2;
    int isPrime=1;
    while(i <= number/2){
       if(number%i == 0)
       {
         
         isPrime =0;
         break;
       }
       
       i++;
}

if(isPrime==1){
cout<<number<<endl;
return number;
}
return 0;
}
int allPrimeNumber(int number){
    int sum = 0;
    for(int i = 2; i<=number ; i++){
       sum = sum + primeNumber(i);
    }
    cout<<sum<<endl;
    return 0;
}
int main(){
    int number ;
    cout<<"Enter a  Number  ";
    cin>>number;
    allPrimeNumber(number);
    return 0;
}