#include<iostream>
using namespace std;

float harmonicSeries(float number){

    float harmonic=1,sum=0;
    for(int i=1;i<=number;i++){
        harmonic=harmonic/i;
        sum=sum+harmonic;
    }
    cout<<sum;
    return 0;
}

int main(){

    int number;

    cout<<"Enter the number : ";
    cin>>number;

    harmonicSeries(number);
}