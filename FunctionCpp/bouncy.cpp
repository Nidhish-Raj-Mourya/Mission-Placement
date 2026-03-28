#include<iostream>
using namespace std;

int bouncyNumber(int num)
{
    if(num<100)
        cout<<"please enter a valid number"<<endl;

    int a = num/1000;
    int b = (num /100)%10;
    int c = (num / 10) % 10;
    int d = num % 10;

    if(a<b && b<c && c<d)
    cout<<"this is not bouncy number";
    
    else if(a>b && b>c && c>d)
    cout<<"this is not bouncy number";

    else
    cout<<"it is a bouncy number";
    
    return num;
}
int main()
{
    int num;
    cout<<"enter the number :";
    cin>>num;
    bouncyNumber(num);
} 