#include<iostream>
using namespace std;

class AddValueFunction
{
    public:
	static int result;
	
	void addValue(int number)
	{
		result+=number;
	}
	
};

int  AddValueFunction::result=0;


	int main() {
		// TODO Auto-generated method stub
		AddValueFunction a1;
		a1.addValue(15);
		a1.addValue(20);
		a1.addValue(20);
		
		cout<<"The sum is "<<AddValueFunction::result;

	
	}


