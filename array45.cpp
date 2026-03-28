#include<iostream>
using namespace std;

int moveAllZeroToEnd(int size){

    int newSize=0,newArray[size];
    int array[size];
    for(int i=0;i<size;i++){
        
        cout<<"Enter the Array : ";
        cin>>array[i];
    }

    newArray[size]=newSize;

    for(int i=0;i<size;i++){
        if(array[i]!=0){
            newArray[newSize]=array[i];
            newSize++;
        }
    }

    for(int i=0;i<size;i++){
        if(array[i]==0){
            newArray[newSize]=array[i];
            newSize++;
        }
    }
    for(int i=0;i<newSize;i++){    
        cout<<newArray[i]<<" ";
    }

    return 0;
}
int main(){

    int size;

    cout<<"Enter the Size : ";
    cin>>size;

    moveAllZeroToEnd(size);
    
}