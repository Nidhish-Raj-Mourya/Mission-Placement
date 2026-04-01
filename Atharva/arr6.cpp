#include<iostream>
using namespace std;

int countSmallerThanX(int size,int element){

    int array[size],count=0;
    for(int i=0;i<size;i++){

        cout<<"Enter the number : ";
        cin>>array[i];
    }

    for(int i=0;i<size;i++){

        if(array[i]<element){
            count++;
        }
    }
    cout<<count;
    return 0;
}

int main(){

    int size,element;

    cout<<"Enter the size : ";
    cin>>size;

    cout<<"Enter the element : ";
    cin>>element;

    countSmallerThanX(size,element);
}