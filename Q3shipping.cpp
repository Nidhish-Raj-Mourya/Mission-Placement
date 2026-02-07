#include<iostream>
using namespace std;
float shippingCost(float weight, float distance){
float base_cost = 5.0;
if(weight >= 1 && weight<=10*10*10*10*10*10*10){
    weight = weight * 2.0;
    cout<<weight<<endl;
}
if(distance >= 1 && distance <= 10*10*10*10*10*10*10){
    distance = distance / 10;
    distance = distance * 0.50;
    cout<<distance<<endl;
}
 float total_cost = base_cost + weight + distance;
 return 0;
}
int main(){
    float weight,distance,total_cost;
    cout<<"Enter weight ";
    cin>>weight;
    cout<<"Enter distance ";
    cin>>distance;
    cout<<"Total Cost is :";
    shippingCost(weight,distance);
    return 0;
}