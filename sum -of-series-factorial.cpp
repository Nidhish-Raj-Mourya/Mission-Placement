#include<iostream>
using namespace std;
int seriessum(int num){
    float sum = 0;
    for(int i = 1;i<=num;i++){
       int fact = 1;
       for(int j = 1;j<=i;j++){
        fact *= j;
       }
       sum += 1.0/fact;
    }
    cout<<"The sum of series "<<sum;

    return 0;
}
int main(){
    int number;

    cout<<"Enter the number ";
    cin>>number;

    seriessum(number)
;

    return 0;
}