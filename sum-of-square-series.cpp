#include<iostream>
using namespace std;
int seriessum(int num){
    float sum = 0;
    for(int i = 1;i<=num;i++){
      int square = i*i;
      if(i%2!=0){
            sum += square;
        }
        else{
            sum -= square;
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