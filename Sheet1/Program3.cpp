#include<iostream>
using namespace std;
int evenNumber(int n)
{
   int i=0;
   while(i<=n){
    cout<<i<<" ";
    i=i+2;
   }
}
int main()
{
    int n;
    cout<<"Enter the number";
    cin>>n;
    evenNumber(n);
}