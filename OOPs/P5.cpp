#include<iostream>
using namespace std;
class Calculator
{
    private:
    int num1,num2,result;

    public : 
    Calculator(int x,int y)
    {
        num1=x;
        num2=y;
    }

    int getResult()
    {
        return result;
    }


    void addition()
    {
        result=num1+num2;
    }
    
    int subtraction()
    {
        result=num1-num2;
    }

    int multiply()
    {
        result=num1*num2;
    }

    int division()
    {
        result=num1/num2;
    }

    int mod()
    {
        result=num1%num2;
    }

};

int main()
{
    Calculator calculator(15,20);

    calculator.addition();
    cout<<calculator.getResult();
    
}