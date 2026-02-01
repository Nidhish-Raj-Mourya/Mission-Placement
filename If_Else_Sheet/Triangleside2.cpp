#include<iostream>
using namespace std;
int main(){
    int side1,side2,side3;
    cout<<"Enter side 1 ";
    cin>>side1;
    cout<<"Enter side 2";
    cin>>side2;
    cout<<"Enter side 3";
    cin>>side3;
    if(side1+side2>side3){
        cout<<"it is triangle";
    }
    else 
   {     cout<<"it is not triangle";
    }

    return 0;
}