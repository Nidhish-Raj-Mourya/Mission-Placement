#include<iostream>
using namespace std;

void checkPrime(int n)
{
    if(n <= 1)
{
cout<<"Not Prime";
return;
}

for(int i = 2 ; i<n; i++)
{
    if(n%i == 0)
    {
        cout<<"Prime";
        return;
    }
}
cout<<"Prime Number";
}

int main(){
int num;
cout<<"Enter the number:";
cin>>num;

checkPrime(num);

}
