#include<iostream>
using namespace std;

void printDigit(int n)
{
while(n>0)
{
    int digit = n % 10;
    cout<<digit<<endl;
    n = n /10;
}
}

int main(){
    int num;
cout<<"Enter the number:";
cin>>num;

printDigit(num);

return 0;
}


