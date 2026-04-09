#include<iostream>
using namespace std;

class StaticImplementation2
{
    public:
	static int count;
	
	void countCalulation()
	{
		count++;
	}
	
};

int StaticImplementation2::count=0;
int main() {
		// TODO Auto-generated method stub

		StaticImplementation2 s1;
		s1.countCalulation();
		s1.countCalulation();
		s1.countCalulation();
		s1.countCalulation();
		cout<<"The function had been called "<<StaticImplementation2::count;
	}


