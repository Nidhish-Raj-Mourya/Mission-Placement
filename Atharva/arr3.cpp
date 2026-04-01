#include<iostream>
using namespace std;

int sumOfArray(int size){

    int array[size],sum=0;
    for(int i=0;i<size;i++){

        cout<<"Enter the number : ";
        cin>>array[i];
    }

    for(int i=0;i<size;i++){

        sum=sum+array[i];

    }
    cout<<sum;
    return 0;
}

int main(){

    int size;

    cout<<"Enter the size : ";
    cin>>size;

    sumOfArray(size);
}