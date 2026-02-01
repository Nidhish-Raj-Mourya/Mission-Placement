#include<iostream>
using namespace std;
int oddNumber(int n)
{
    int i=1;
    while(i<=n)
    {
        cout<<i<<" ";
        i=i+2;
    }
}
int main()
{
    int n;
    cout<<"Enter the Number";
    cin>>n;
    oddNumber(n);
    return 0;
}