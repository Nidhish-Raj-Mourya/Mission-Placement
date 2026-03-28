#include<iostream>
using namespace std;

int disariumNumberChecker(int number)
{
    int originalNumber = number;

    int first = number/100;
    int second = (number/10)%10;
    int third = number%10;

    int sum = first + (second*second) + (third*third*third);
    
    if(sum == originalNumber)
    {
        cout<<"Disarium number";
    }
    else{
        cout<<"Not disarium number";
    }
    return 0;
}
int main()
    {
        int number;
        cout<<"Enter a 2 - digit number :" <<endl;
        cin>>number;

        disariumNumberChecker(number);
    }
