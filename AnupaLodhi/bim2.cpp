#include<iostream>
using namespace std;
int main(){
    float weight;
    float height;
    cin >> weight;
    cin >> height;
    weight = weight / (height * height);
    if(weight <= 18.5)
    {cout << "Underweight";}
    else if(weight > 18.5 && weight <= 24.9)
    {cout << "Normal weight";}
    else if(weight >= 25 && weight <= 29.9)
    {cout << "Overweight";}
    else if(weight >= 30)
    {cout << "Obese";}
    return 0;
}