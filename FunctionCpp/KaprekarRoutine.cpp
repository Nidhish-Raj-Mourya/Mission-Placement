#include<iostream>
using namespace std;

int kaprekarStep(int number)
{
    int first = number/1000;
    int second = (number/100)%10;
    int third = (number/10)%10;
    int fourth = number%10;

    if(first > second) swap(first,second);
    if(first > third) swap(first,third);
    if(first > fourth) swap(first,fourth);
    
    if(second > third) swap(second,third);
    if(second > fourth) swap(second,fourth);

    if(third > fourth) swap(third,fourth);

    int smallest = first*1000 + second*100 + third*10 + fourth;
    int largest = fourth*1000 + third*100 + second*10 + first;

    cout << "Largest = " << largest << endl;
    cout << "Smallest = " << smallest << endl;
    cout << "Result = " << largest - smallest << endl;

    return 0;
}
int main()
{
    int number;
    cout<<"Enter a 4 - digit number :" <<endl;
    cin>>number;

    if(number > 9999 || number < 1000)
    {
        cout<<"Invalid input";
        return 0;
    }

    kaprekarStep(number);
}