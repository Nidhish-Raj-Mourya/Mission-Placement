#include<iostream>
using namespace std;

class StaticCounter{
	
    public:
	static int count;
	
	static void increment()
	{
		count++;
	}
	
	static void decrement() {
		count--;
	}
	
	static int getValue()
	{
		return count;
	}
};
int StaticCounter:: count=0;
int main() {
		// TODO Auto-generated method stub

		StaticCounter::increment();
		StaticCounter::increment();
		
		cout<<StaticCounter::getValue()<<endl;
		
		StaticCounter::decrement();
		cout<<StaticCounter::getValue();
	}


