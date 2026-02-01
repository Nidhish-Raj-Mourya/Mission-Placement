#include<iostream>
using namespace std;
int Factorial(int n)
{
   int factorial=1;
   while(n>0)
   {
   factorial=factorial*n;
   n--;
   }
   cout<<"Factorial is "<<factorial;
}
int main(){
    int number;
    cout<<"Enter the n term";
    cin>>number;
    Factorial(number);
    return 0;
} 