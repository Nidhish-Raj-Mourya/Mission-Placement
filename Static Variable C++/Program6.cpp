#include<iostream>
using namespace std;

class Student 
{
    public:
	static int count;
	
	Student()
	{
		count++;
	}
};

int Student:: count=0;
int main()
	{

		Student s5;
		Student s6;
		Student s7;
		Student s8;
		
		cout<<"The no. of object Created are "<<Student::count;
	
}
