#include<iostream>
using namespace std;

void countDigit(int n , int d)
{
    int count = 0;

    while(n!=0)
    {
        if(n & 10 == d)
        {
            count++;
        }
        n = n/10;
    }

    cout<<"Count =" << count;
}   

int main(){
    int num , digit;

    cout<<"Enter the number:";
    cin>>num;

    cout<<"Enter the digit from (0-9):";
    cin>>digit

    countDigit(num, digit);
}
