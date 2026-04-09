#include<iostream>
using namespace std;

class MathHelper
{
    public:
	static void isEven(int n)
	{
		if(n%2==0)
		{
			cout<<"It is even";
		}
		else
		{
			cout<<"It is not even";
		}
	}
	
	static void isOdd(int n)
	{
		if(n%2!=0)
		{
			cout<<"It is Odd";
		}
		else
		{
			cout<<"It is not Odd";
		}
	}
};

int main() {
		// TODO Auto-generated method stub
		MathHelper::isEven(10);
		MathHelper::isEven(9);
		MathHelper::isOdd(10);
		MathHelper::isOdd(7);
		
	}


