#include<iostream>
using namespace std;
int primeNumber(int number){
    int count = 0;
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
return 1;
}

return 0;
}

int countPrimeNumber(int number){
    int count= 0;
    for(int i = 2; i<=number; i++)
    {
      primeNumber(i);
      count++;

     
    }
    cout<<count<<endl;
    
    return 0;
}

int main()
{
    int number;
    cout<<"Enter a number : ";
    cin>>number;
    countPrimeNumber(number);
    return 0;
    
} 
