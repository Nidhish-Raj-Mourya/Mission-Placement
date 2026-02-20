#include<iostream>
using namespace std;

int duckNumber(int num)
{
    int number1 = num / 1000;        
    int number2 = (num / 100) % 10;
    int number3 = (num / 10) % 10;
    int number4 = num % 10;

    if (number1 != 0 && (number2 == 0 || number3 == 0 || number4 == 0))
    
        cout<<"this is a duck number";  
    else
        cout<<"not a duck number";
}

int main()
{
    int num;
    cout << "enter a 4-digit number: ";
    cin >>num;

    cout<<duckNumber(num);

}
