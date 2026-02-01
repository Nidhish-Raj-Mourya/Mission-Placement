#include<iostream>
using namespace std;
int table(int n,int range)
{
    int i=1;
    while(i<=range){
        cout<<n<<" x "<<i<<" = "<<n*i<<"\n";
        i++;
    }
}
int main()
{
    int n,range;
    cout<<"Enter the number whose table is to be printed \n";
    cin>>n;
    cout<<"Enter the range \n";
    cin>>range;
    table(n,range);
    return 0;
}