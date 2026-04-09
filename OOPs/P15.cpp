#include<iostream>
using namespace std;

class Calculation
{
    public:
    int addition(int number1,int number2)
    {
        return number1+number2;
    }
    int addition(int number1,int number2,int number3)
    {
        return number1+number2+number3;
    }
    double addition(double number1,double number2)
    {
        return number1+number2;
    }
};
int main()
{
    Calculation c1;
    cout<<c1.addition(10,45)<<endl;
    cout<<c1.addition(10,45,10)<<endl;
    cout<<c1.addition(12.4,12.5);
}
