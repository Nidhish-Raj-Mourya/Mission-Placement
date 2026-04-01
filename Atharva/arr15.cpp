#include<iostream>
using namespace std;

int maximumMinimumElement(int size){

    int array[size],maximum=0,minimum;
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

        if(array[i]<minimum){
            minimum=array[i];

        }
    }

    cout<<"Max : "<<maximum;
    cout<<" Min : "<<minimum;
    return 0;
}

int main(){

    int size,element;

    cout<<"Enter the size : ";
    cin>>size;


    maximumMinimumElement(size);
}