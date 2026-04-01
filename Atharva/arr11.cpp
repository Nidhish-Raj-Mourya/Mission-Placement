#include<iostream>
using namespace std;

int productOfAll(int size){

    int array[size],product=1;
    for(int i=0;i<size;i++){

        cout<<"Enter the number : ";
        cin>>array[i];
    }

    for(int i=0;i<size;i++){

        product=product*array[i];
    }
    cout<<product;
    return 0;
}

int main(){

    int size,element;

    cout<<"Enter the size : ";
    cin>>size;

    productOfAll(size);
}