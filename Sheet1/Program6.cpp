#include<iostream>
using namespace std;
int table(int n)
{
    int i=1;
    while(i<=10){
        cout<<n<<" x "<<i<<" = "<<n*i<<"\n";
        i++;
    }
}
int main()
{
    int n;
    cout<<"Enter the number whoe table is to be printed ";
    cin>>n;
    table(n);
    return 0;
}