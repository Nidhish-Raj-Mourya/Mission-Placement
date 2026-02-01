#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"The number is: ";
    cin>>number;
    if(number<=1&&number>=10){
        cout<<"lies between 1 to 10.";
    }
    else if(number<=11&&number>=50){
        cout<<"lies between 11 to 50.";
    }
    else if(number<=51&&number<=1000){
        cout<<"lies between 51 to 1000.";
    }
    else{
        cout<<"invalid";
    }




return 0;
}