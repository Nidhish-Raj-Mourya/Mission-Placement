#include<iostream>
using namespace std;
int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    if(number%3==0 and number%5==0){
        cout<<"Both divisble by 3 and 5 ";
    }
    else if(number%3==0){
        cout<<"Only divisble by 3 ";
    }
    else if(number%5==0){
        cout<<"Only divisble by 5 ";
    }
    else{
        cout<<"Not divisble by 3 and 5 ";
    }
}