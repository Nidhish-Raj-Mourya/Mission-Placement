#include<iostream>
using namespace std;
int main(){
    float weight,distance;
    float cost=50;
    cout<<"Enter weight in KG ";
    cin>>weight;
    cout<<"enter distance in KM";
    cin>>distance;
    if(weight>5){
        cout<<"it is of more weight than 5 KG \n";
      cost+=((weight-5)*10);
    }
    if(distance>100){
        cout<<"it is of more distance than 100 KM \n";
      cost+=((distance-100)*5);
    }
    if(weight>5&&distance>100){
        cout<<"As it is more weight than 5 KG and more distance than 100 KM Additional cost will be added";
        cost+=20;
    }
    cout<<"New Cost is"<<cost;
}