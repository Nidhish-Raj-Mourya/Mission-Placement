#include<iostream>
using namespace std;

int countEvenOddZero(int size){

    int array[size],evenCount=0,oddCount=0,zero=0;
    for(int i=0;i<size;i++){

        cout<<"Enter the number : ";
        cin>>array[i];
    }

    for(int i=0;i<size;i++){

        if(array[i]==0){
            zero++;
        }
        else if(array[i]%2!=0){
            oddCount++;
        }
        else {
            evenCount++;
        }
    }
    cout<<"Even : "<<evenCount<<" Odd : "<<oddCount<<" Zero : "<<zero;
    return 0;
}

int main(){

    int size,element;

    cout<<"Enter the size : ";
    cin>>size;

    countEvenOddZero(size);
}