#include<iostream>
using namespace std;

class Employee{
    private:
    int id;

    public:
    Employee(int a)
    {
        id=a;
    }

    int getId()
    {
        return id;
    }
};

int main()
{
    Employee E1(101);
    cout<<E1.getId();
}