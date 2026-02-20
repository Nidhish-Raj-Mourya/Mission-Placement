#include<iostream>
using namespace std;

int evenCount(int num)
{
    int digit1 = num/1000;
    int digit2 = (num/100)%10;
    int digit3 = (num/10)%10;
    int digit4 = num%10;
    
    int count;
    if(digit1%2==0) count++;
    if(digit2%2==0) count++;
    if(digit3%2==0) count++;
    if(digit4%2==0) count++;
    
    return count;
}

int main()
{
    int num;
    cout<<"enter four digit number :";
    cin>>num;
    cout<<evenCount(num);
}