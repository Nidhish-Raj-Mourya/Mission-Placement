#include<iostream>
using namespace std;
int main(){
    float weight,height,bodyMassIndex;
    cout<<"Enter weight \n";
    cin>>weight;
    cout<<"Enter height \n";
    cin>>height;
    bodyMassIndex=weight/(height*height);
    cout<<"The Body Mass Index is "<<bodyMassIndex;
    return 0;
}