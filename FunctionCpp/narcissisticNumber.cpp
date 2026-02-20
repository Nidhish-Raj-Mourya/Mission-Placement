#include<iostream>
using namespace std;

int narcissisticNumber(int number)
{
    int first = number/100;
    int middle = (number/10)%10;
    int last = number%10;

    int sum = first*first*first + middle*middle*middle + last*last*last;
    return sum;
}
int main()
{
    int number;
    cout<<"Enter a 3- digit number : " << endl;
    cin>>number;

    if(number > 999 || number < 100)
    {
        cout<<"Invalid input";
        return 0;
    }

    int originalNumber = number;
    cout<<originalNumber <<" "<<narcissisticNumber(number);
}