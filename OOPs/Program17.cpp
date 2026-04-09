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


    bool operator==(OperatorOverloading1 temp)
    {
        
        bool resultBoolean;

        if(this->realValueObject==temp.realValueObject && this->imaginaryValueObject==temp.imaginaryValueObject)
        {
            resultBoolean=true;
        }
        else
        {
            resultBoolean=false;
        }

        return resultBoolean;

    }
};

int main()
{
    OperatorOverloading1 o1(3,4);
    OperatorOverloading1 o2(1,2);
   
    bool result=o1==o2;

    
    cout<<result;
    
}