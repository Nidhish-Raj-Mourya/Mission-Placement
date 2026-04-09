#include<iostream>
using namespace std;

class Calculator2
{
    public:
	static int addition(int a,int b)
	{
		return a+b;
	}
	static int multiply(int a,int b)
	{
		return a*b;
	}
	
	
};
int main()
	{
	cout<<Calculator2::addition(12,5)<<endl;
	cout<<Calculator2::multiply(12, 3);
	}	


