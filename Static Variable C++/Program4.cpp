#include<iostream>
using namespace std;

class StaticImplementation4
{
    public:
	static int count;
	
	void countCalulation()
	{
		count++;
	}
	
};

int StaticImplementation4::count=0;

int main() {
		// TODO Auto-generated method stub
		
		StaticImplementation4 s1;
		s1.countCalulation();
		s1.countCalulation();
		s1.countCalulation();
		s1.countCalulation();
		cout<<"The function had been called "<<StaticImplementation4::count;

	}


