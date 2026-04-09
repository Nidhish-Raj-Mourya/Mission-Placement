#include<iostream>
using namespace std;

class BankValidation{
    private:


    int balance;

    public:

    void setBalance(int a)
    {
        if(a<0)
        {
            cout<<"Invalid ";
        }
        else
        {
            balance=a;
        }
    }

    int getBalance()
    {
        return balance;
    }
};

int main()
{
    BankValidation p1;
    p1.setBalance(-100);
    cout<<p1.getBalance();
}