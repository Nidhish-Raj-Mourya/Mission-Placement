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

}

return 0;
}
int allPrimeNumber(int number){
    for(int i = 2; i<=number ; i++){
        primeNumber(i);
        
    }
return 0;
}
int main(){
    int number ;
    cout<<"Enter a  Number  ";
    cin>>number;
    allPrimeNumber(number);
    return 0;
}