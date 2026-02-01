#include<iostream>
using namespace std;
int main(){
    int mathsMarks,physicsMarks,chemistryMarks;
    cout<<"Enter Maths marks";
    cin>>mathsMarks;
    cout<<"Enter Physics marks";
    cin>>physicsMarks;
    cout<<"Enter chemistry marks";
    cin>>chemistryMarks;
    if(((mathsMarks+chemistryMarks+physicsMarks)>=240)&&(mathsMarks>=80)&&(physicsMarks>=75)&&(chemistryMarks>=75))
    {cout<<"Eligible";}
    else
    {cout<<"not eligible";}
}