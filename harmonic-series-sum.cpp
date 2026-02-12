#include<iostream>
using namespace std;
int harmonic(float num){
    
    float sum = 0;
    for(int i=1;i<=num;i++){
      float next = 1.0/i;
      cout<<next<<" ";
        sum +=next;
    }
    cout<<sum;
    return 0;
}
int main(){
    float number;

    cout<<"The number is ";
    cin>>number;

    harmonic(number);

    return 0;
}