#include<iostream>
using namespace std;

int countEvenOdd(int size){

    int array[size],evenCount=0,oddCount=0;
    for(int i=0;i<size;i++){

        cout<<"Enter the number : ";
        cin>>array[i];
    }

    for(int i=0;i<size;i++){

        if(array[i]%2==0){
            evenCount++;
        }
        else{
            oddCount++;
        }
    }
    cout<<"Even : "<<evenCount<<" Odd : "<<oddCount;
    return 0;
}

int main(){

    int size,element;

    cout<<"Enter the size : ";
    cin>>size;

    countEvenOdd(size);
}