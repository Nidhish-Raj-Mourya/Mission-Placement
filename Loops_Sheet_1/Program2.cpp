#include<iostream>
using namespace std;
int reverse(int n)
{
    while(n>=0)
    {
        cout<<n<<" ";
        n--;
    }
}
int main()
{
    int n;
    cout<<"Enter the Number";
    cin>>n;
    reverse(n);
    return 0;
}