#include<iostream>
using namespace std;

void ShippingCostCalculator(int weight,int distance){

    if(weight>=1 && weight<=10000000 && distance>=1 && distance<=10000000){
        
    float baseCost=5;
    float weightCost=weight*2;
    float distanceCost=distance/10*0.5;
    float totalCost=weightCost+distanceCost+baseCost;

    cout<<totalCost;

    }
    else{
        cout<<"Invalid weight and distance";
    }

}

int main(){
    float weight;
    float distance;

    cout<<"Enter weight:";
    cin>>weight;
    cout<<"Enter distance:";
    cin>>distance;

    ShippingCostCalculator(weight,distance);
}
