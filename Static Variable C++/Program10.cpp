#include<iostream>
using namespace std;

class Employee
{
    public:
	static int id;

	char empId[6]="EMP";
	
	void display()
	{
		cout<<"The employee Id is "<<empId<<id++<<endl;
	}
};

int Employee::id=101;

int main()
	{
		Employee e1;
		Employee e2;
		
		e1.display();
		e2.display();
	}


