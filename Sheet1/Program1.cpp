#include<iostream>
using namespace std;
int printNumber(int n)
{
    int i=0;
    while(i<=n)
    {
        cout<<i<<" ";
        i++;
    }
}
int main()
{
    int n;
    cout<<"Enter the Number";
    cin>>n;
    printNumber(n);
    return 0;
}