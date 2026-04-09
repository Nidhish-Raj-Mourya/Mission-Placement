#include<iostream>
using namespace std;


class Temperature
{
    public:
	static float celsiusToFahrenheit(float n)
	{
		float result=(float) ((n*1.8)+32.0);
		return result;
	}
	
	static float FahrenheitToCelsius(float n)
	{
		float result= (float) ((n-32)*(5.0/9.0));
		return result;
	}
};
/**
 * 
 */
int main() {
		// TODO Auto-generated method stub

		cout<<Temperature::celsiusToFahrenheit(32)<<endl;
		cout<<Temperature::FahrenheitToCelsius(112);

	}


