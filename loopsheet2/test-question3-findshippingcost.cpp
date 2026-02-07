#include<iostream>
using namespace std;
int cost(int w,int d){
    int base_cost = 5;
    int cost_per_kg = 2;
    float distance_cost = 0.50;

    cost_per_kg = w * cost_per_kg;
    distance_cost = d *(distance_cost/10);

    int total_cost = base_cost + cost_per_kg + distance_cost;

    cout<<"The total shipping cost is "<<total_cost;

    return 0;

}
int main(){
    int weight,distance;

    cout<<"The weight is: ";
    cin>>weight;

    cout<<"The distance is: ";
    cin>>distance;

   cost(weight,distance);
   

    return 0;


}