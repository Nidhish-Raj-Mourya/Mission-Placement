#include<iostream>
using namespace std;

int maximumElementPosition(int size){

    int array[size],maximum=0;
    for(int i=0;i<size;i++){

        cout<<"Enter the number : ";
        cin>>array[i];
    }

    for(int i=0;i<size;i++){

        if(array[i]>maximum){
            maximum=array[i];

        }
    }

    for(int i=0;i<size;i++){
        if(array[i]==maximum){
            cout<<i;
        }
    }
    return 0;
}

int main(){

    int size,element;

    cout<<"Enter the size : ";
    cin>>size;


    maximumElementPosition(size);
}