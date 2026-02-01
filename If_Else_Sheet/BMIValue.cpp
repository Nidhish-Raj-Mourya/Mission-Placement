#include<iostream>
using namespace std;
int main(){
    float height;
    float weight;
    cout<<"Enter weight";
    cin>>weight;
    cout<<"enter height";
    cin>>height;
    float bmiValue=weight/(height*height);
    if(bmiValue<18.5){
        cout<<"UnderWeight";
    }
    if(bmiValue>=18.5&&bmiValue<25){
        cout<<"Normal";
    }
    if(bmiValue>=25&&bmiValue<30){
        cout<<"Overweight";
    }
    if(bmiValue>=30){
        cout<<"Obese";
    }
    return 0;
}