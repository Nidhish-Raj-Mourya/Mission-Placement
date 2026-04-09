#include<iostream>
using namespace std;

class Student3
{
    public:
	static int rollno;
	int studentrollno=0;
	Student3()
	{
		studentrollno=rollno++;
	}
	
	void display()
	{
		cout<<"The roll no. is "<<studentrollno;
	}
	
	void removeRollNo()
	{
		studentrollno=0;
		rollno--;
	}
	
};
int Student3::rollno=1;
int main() {
		// TODO Auto-generated method stub

		Student3 s1;
		Student3 s2;
		Student3 s3;
		
		s2.removeRollNo();
		s2.display();
		

}
