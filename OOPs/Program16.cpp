#include<iostream>
using namespace std;

class OperatorOverloading1
{
    

    public:
    int realValueObject;
    int imaginaryValueObject;

    OperatorOverloading1(int realValue,int imaginaryValue)
    {
        realValueObject=realValue;
        imaginaryValueObject=imaginaryValue;
    }


    OperatorOverloading1 operator+(OperatorOverloading1 temp)
    {
        OperatorOverloading1 result(0,0);

        result.realValueObject=this->realValueObject+temp.realValueObject;
        result.imaginaryValueObject=this->imaginaryValueObject+temp.imaginaryValueObject;

        return result;

    }
};

int main()
{
    OperatorOverloading1 o1(3,4);
    OperatorOverloading1 o2(1,2);
    OperatorOverloading1 o3(0,0);


    o1.operator+(o2);
    o3=o1+o2;

    cout<<o3.realValueObject<<"+"<<o3.imaginaryValueObject<<"i";
    
}