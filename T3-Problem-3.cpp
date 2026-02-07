#include<iostream>
using namespace std;

int weightOfPackage(int weight){
    
    int packageWeight,perKilogram=2;
    
    packageWeight=weight*perKilogram;
    
    return packageWeight;
}

float distanceToShip(int distance){
    
    float actualDistance,distancePerKilometer=0.50;

    distance=distance/10;
    actualDistance=distance*distancePerKilometer;
    
    return actualDistance;
}

float finalCost(int weight,int distance,int baseCost){
    
    float actualCost;
    
    actualCost=weightOfPackage(weight)+distanceToShip(distance)+baseCost;

    cout<<actualCost;
    return 0;
}

int main(){

    int weight,distance,baseCost=5;

    cout<<"Enter the weight : ";
    cin>>weight;

    cout<<"Enter the distance : ";
    cin>>distance;
    
    finalCost(weight,distance,baseCost);
}