#include<iostream>
using namespace std;
int main()
{
    int number,first,second,third,reverse;
    cout<<"Enter the number: ";
    cin>>number;
    first = number%10;
    cout<<"the first digit: "<<first<<endl;
    second = number%100;
    second = second/10;
    cout<<"the second digit: "<<second<<endl;
    third = number/100;
    cout<<"the third digit: "<<third<<endl;
    reverse = (first * 100 )+ (second * 10) + third;
    cout<<"the reverse number: "<<reverse;
    return 0;
}