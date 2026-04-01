#include<iostream>
using namespace std;

int minimumElement(int size){

    int array[size],minimum;
    for(int i=0;i<size;i++){

        cout<<"Enter the number : ";
        cin>>array[i];
    }

    for(int i=0;i<size;i++){

        if(array[i]<minimum){
            minimum=array[i];

        }
    }
    cout<<minimum;
    return 0;
}

int main(){

    int size,element;

    cout<<"Enter the size : ";
    cin>>size;


    minimumElement(size);
}