#include<iostream>
using namespace std;

int sumNatural(int number){
    int sum = 0;
    for(int i=1;i<=number;i++){
        sum=sum+i;
    }
    cout<<sum;
    return sum;
}

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    sumNatural(number);

}