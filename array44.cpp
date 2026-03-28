#include<iostream>
using namespace std;

int seprateEvenOddArray(int size){

    int newSize=0,newarray[size];
    int array[size];
    for(int i=0;i<size;i++){
        
        cout<<"Enter the Array : ";
        cin>>array[i];
    }
    newarray[size]=newSize;
    for(int i=0;i<size;i++){
        if(array[i]%2==0){
            newarray[newSize]=array[i];
            newSize++;
        }   
    }


    for(int i=0;i<size;i++){
        if(array[i]%2!=0){
            newarray[newSize]=array[i];
            newSize++;
        }
    }
    for(int i=0;i<newSize;i++){
        cout<<newarray[i]<<" ";
    }
    
    return 0;
}
int main(){

    int size;

    cout<<"Enter the Size : ";
    cin>>size;

    seprateEvenOddArray(size);
    
}