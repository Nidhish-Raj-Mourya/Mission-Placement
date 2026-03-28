#include<iostream>
using namespace std;

int swapIandJ(int size){

    int array[size],temp;
    for(int i=0;i<size;i++){
        
        cout<<"Enter the Array : ";
        cin>>array[i];
    }

    temp=array[0];

    for(int i=0;i<size;i++){
        array[i]=array[i+1];
    }

    array[size-1]=temp;

    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    return 0;

}
int main(){

    int size;

    cout<<"Enter the Size : ";
    cin>>size;

    swapIandJ(size);
    
}