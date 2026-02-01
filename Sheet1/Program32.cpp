#include<iostream>
using namespace std;
int sumOf(int number){
     while(number>9){
        int sum=0;
        while(number!=0)
        {
        sum+=number%10;
        number=number/10;
        }
        number=sum;
        cout<<sum<<"\n";
     }
}
int main(){
    int number;
    cout<<"Enter number ";
    cin>>number;
    sumOf(number);
    return 0;
}