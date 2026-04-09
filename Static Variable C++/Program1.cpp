#include<iostream>
using namespace std;
class StaticImplementation
{
    public:
	static int value;
	
	void display()
	{
		cout<<"the Static Value is "<<value<<"\n";
	}
        
};

int StaticImplementation::value=10;
int main(){
		
		StaticImplementation s1;
		
		s1.display();
		StaticImplementation::value=100;
		s1.display();
		// TODO Auto-generated method stub

	}


