#include<iostream>
using namespace std;

int averageDisplay(int size){

    int array[size],sum=0,average;
    for(int i=0;i<size;i++){

        cout<<"Enter the number : ";
        cin>>array[i];
    }

    for(int i=0;i<size;i++){

        sum=sum+array[i];

    }
    average=sum/size;
    cout<<average;
    return 0;
}

int main(){

    int size;

    cout<<"Enter the size : ";
    cin>>size;

    averageDisplay(size);
}