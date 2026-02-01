#include<iostream>
using namespace std;
int reverse(int number){
    int digit1 = number/10;
    int digit2 = number%10;
    int digit = (digit2*10)+digit1;
    return digit;

}
int main()
{
    int number;
    cout<<"number: ";
    cin>>number;
    int digit = reverse(number);
    cout<<"reverse number: "<<digit;

    return 0;
}