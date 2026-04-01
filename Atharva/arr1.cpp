#include<iostream>
using namespace std;

int inputDisplay(int size){

    int array[size];
    for(int i=0;i<size;i++){

        cout<<"Enter the number : ";
        cin>>array[i];
    }

    for(int i=0;i<size;i++){

        cout<<array[i]<<" ";

    }
    return 0;
}

int main(){

    int size;

    cout<<"Enter the size : ";
    cin>>size;

    inputDisplay(size);
}