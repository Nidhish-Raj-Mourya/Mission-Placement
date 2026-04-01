#include<iostream>
using namespace std;

int sumEven(int size){

    int array[size],sum=0;
    for(int i=0;i<size;i++){

        cout<<"Enter the number : ";
        cin>>array[i];
    }

    for(int i=0;i<size;i++){

        if(array[i]%2==0){
            sum=sum+array[i];
        }
    }
    cout<<sum;
    return 0;
}

int main(){

    int size,element;

    cout<<"Enter the size : ";
    cin>>size;

    sumEven(size);
}