#include<iostream>
using namespace std;

int spyNumber(int num)
{
    int a = num / 100;
    int b = (num / 10) % 10;
    int c = num % 10;

    int sum = a + b + c;
    int product = a * b * c;

    if (sum == product)
        cout<<"this is spy number";  
    else
        cout<<"not a spy number";
    return num;     
   
}

int main()
{
    int num;
    cout << "Enter a 3-digit number: ";
    cin >> num;

    cout<<spyNumber(num);
}
