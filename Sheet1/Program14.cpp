#include<iostream>
using namespace std;
int squareSum(int n)
{
   int squareSum=0;
   int i=1;
   while(i<=n)
   {
   cout<<i*i<<" ";
   squareSum+=i*i;
   i++;
   }
   cout<<"Square Sum is "<<squareSum;
}
int main(){
    int number;
    cout<<"Enter the n term ";
    cin>>number;
    squareSum(number);
    return 0;
}