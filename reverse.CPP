#include<iostream>
using namespace std;
int main()
{
    int number,first,second,third;
    cout<<"Enter the number: ";
    cin>>number;
    first = number%10;
    cout<<"the first digit: "<<first<<endl;
    second = number%100;
    second = second/10;
    cout<<"the second digit: "<<second<<endl;
    third = number/100;
    cout<<"the third digit: "<<third<<endl;
    cout<<"the reverse number: "<<first<<second<<third;
    return 0;
}