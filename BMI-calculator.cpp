#include<iostream>
using namespace std;
int main(){
    float BMI,height,weight;
    cout<<"Enter the height : ";
    cin>>height;
    cout<<"Enter the weight : ";
    cin>>weight;
    BMI=weight/(height*height);
    if(BMI<18.5){
        cout<<"Underweight "<<BMI;
    }
    else if(BMI>=18.5 and BMI<=24.9){
        cout<<"Normal "<<BMI;
    }
    else if(BMI>=25 and BMI<=29.9){
        cout<<"OverWeight "<<BMI;
    }
    else {
        cout<<"Obese "<<BMI;
    }
}