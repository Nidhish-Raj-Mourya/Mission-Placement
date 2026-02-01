#include<iostream>
using namespace std;
int sunnyNumber(int number){
    if(number==1||number==4||number==9||number==16||number==25||number==36||number==49||number==64||number==81){
    cout<<"it is a perfect square";
    }
    else{
    cout<<"it is not a perfect square";
    }
}
int main(){
    int number;
    cout<<"enter the number ";
    cin>>number;
    sunnyNumber(number+1);
}