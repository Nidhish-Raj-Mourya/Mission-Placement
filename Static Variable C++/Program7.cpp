#include<iostream>
using namespace std;

class Student2
{
    public:
    
	static int rollno;
	int studentrollno;
	Student2()
	{
		studentrollno=rollno++;
	}
	
	void display()
	{
		cout<<"The roll no. is "<<studentrollno;
	}
};
int Student2::rollno=1;

int main()
	{
		Student2 s1;
		Student2 s2;
		Student2 s3;
		Student2 s4;
		
		
	
		s4.display();
		s3.display();
	}

