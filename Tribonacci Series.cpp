#include<iostream>
using namespace std;
int seriessum(int num){
    int t1 =0,t2 =1,t3 =1;
    cout<<t1<<" "<<t2<<" "<<t3<<" ";
    int next;
    for(int i =4;i<=num;i++){
        next = t1+t2+t3;
        cout<<next<<" ";
        t1 = t2;
        t2 = t3;
        t3 = next;

    }

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