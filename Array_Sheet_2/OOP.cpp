#include<iostream>
using namespace std;
class Calculator
{
    private:
    int num1,num2;

    public : 
    Calculator(int x,int y)
    {
        num1=x;
        num2=y;
    }

    void setNumber1(int x)
    {
        num1=x;
    }

    void setNumber2(int x)
    {
        num2=x;
    }

    void getNumber1()
    {
        return num1;
    }

    void getNumber2()
    {
        return num2;
    }

    void addition();
    
    int subtraction()
    {
        cout<<num1-num2;
        cout<<"\n";
    }

    int multiply()
    {
        cout<<num1*num2;
        cout<<"\n";
    }

    int division()
    {
        cout<<num1/num2;
        cout<<"\n";
    }

    int mod()
    {
        cout<<num1%num2;
        cout<<"\n";
    }

};

void Calculator:: addition()
    {
        cout<<num1+num2;
        cout<<"\n";
    }

int main()
{
    Calculator calculator(15,20);

    calculator.addition();
    calculator.subtraction();
    calculator.multiply();
    calculator.division();
    calculator.mod();
    
}