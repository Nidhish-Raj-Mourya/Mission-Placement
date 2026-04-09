#include<iostream>
using namespace std;

class StaticImplementation3
{
    public:
	static int count;
	int normalCount=0;
	
	static void countCalulation()
	{
		count++;	
	}
	
	
};
int StaticImplementation3::count=0;
int main()
{

	StaticImplementation3 s1;
	
	StaticImplementation3::countCalulation();
	StaticImplementation3::countCalulation();
	StaticImplementation3::countCalulation();
	
	cout<<"The function had been called "<<s1.normalCount<<endl;
	
	cout<<"The function had been called "<<StaticImplementation3::count;
	}
	

