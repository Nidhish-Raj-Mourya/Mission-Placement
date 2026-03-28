#include<iostream>
using namespace std;

int reverseArray(int size){

    int array[size],temp;
    for(int i=0;i<size;i++){
        
        cout<<"Enter the Array : ";
        cin>>array[i];
    }

    for(int i=0;i<size/2;i++){

        temp=array[i];
        array[i]=array[size - 1 - i];
        array[size - 1 -i]=temp;
    }
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    return 0;

}
int main(){

    int size;

    cout<<"Enter the Size : ";
    cin>>size;

    reverseArray(size);
    
}