#include<iostream>
using namespace std;

int weightPriceCalculator(int number)
{
    return number*2;
}

double distancePriceCalculator(int number)
{   
    if(number<=9)
    {
        return 0;
    }
    int price=1;
    double cost=0.5;

    if(number>9)

    {   number=number/10;
        cost*=number;
    }

    return cost;
}

int ShippingCost(int weight,int distance)
{
    if(0>=weight||weight>=10000000||0>=distance||distance>=10000000)
    {
        cout<<"Invalid Input ";
        return 0;
    }

    int baseCost=5;

    int weightCost=weightPriceCalculator(weight);

    double distanceCost=distancePriceCalculator(distance);
    
    double totalShippingCost=distanceCost+baseCost+weightCost;
    cout<<"The total Shipping Cost is "<<totalShippingCost;
}

int main()
{
    int w,d;

    cout<<"Enter the weight in kg ";
    cin>>w;

    cout<<"Enter the distance in km ";
    cin>>d;

    ShippingCost(w,d);

    return 0;
}