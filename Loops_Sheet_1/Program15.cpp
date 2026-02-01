#include<iostream>
using namespace std;
int cubeSum(int n)
{
   int cubeSum=0;
   int i=1;
   while(i<=n)
   {
   cout<<i*i*i<<" ";
   cubeSum+=i*i*i;
   i++;
   }
   cout<<"Cube Sum is "<<cubeSum;
}
int main(){
    int number;
    cout<<"Enter the n term";
    cin>>number;
    cubeSum(number);
    return 0;
}