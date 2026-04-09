#include<iostream>
using namespace std;

class Student4
{
    public:
	static char collegeName[10];
	static int rollno;
	int studentrollno=0;
	Student4()
	{
		studentrollno=rollno++;
	}
	
	void display()
	{
		cout<<"The roll no. is "<<studentrollno<<endl;
		cout<<"The College name is "<<collegeName;
	}
	
	void removeRollNo()
	{
		studentrollno=0;
	}
	
};
char Student4::collegeName[]="Sage";
int  Student4::rollno=1;

int main() {
		// TODO Auto-generated method stub

		Student4 s1;
		Student4 s2;
		Student4 s3;
		
		
		s2.display();
	

}
