#include<iostream>
using namespace std;
int main(){
    int weight, distance,total_cost=50;
    cin>>weight>>distance;
    if(weight>=5){
        total_cost = (weight - 5)*10;
        cout << "Total cost " <<total_cost<<endl;
    }
    if (distance >= 100){
        total_cost = (distance - 100)*5;
        cout <<"Total cost " << total_cost<<endl;
    }
    if(weight >= 5 && distance >= 100){
        total_cost += 20;
        cout<<"Total cost "<< total_cost<< endl;
    }
    return 0;
}