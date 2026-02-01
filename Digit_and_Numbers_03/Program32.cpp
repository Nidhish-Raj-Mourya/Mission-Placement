#include<iostream>
using namespace std;
int trimorphic(int number){
    int cube=number*number*number;
    cube=cube%100;
    if(number==cube){
        cout<<"it is trimorphic";
    }
    else{
        cout<<"it is not trimorphic";
    }
}
int main(){
    int number;
    cout<<"enter two digit number";
    cin>>number;
    trimorphic(number);
}