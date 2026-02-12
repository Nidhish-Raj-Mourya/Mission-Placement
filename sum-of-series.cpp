#include<iostream>
using namespace std;
int seriessum(int num){
    int sum = 0;
    for(int i = 1;i<=num;i++){
        if(i%2!=0){
            sum += i;
        }
        else{
            sum -= i;
        }
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