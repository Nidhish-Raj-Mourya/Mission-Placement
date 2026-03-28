#include<iostream>
using namespace std;

int removeAllOccur(int size,int element){

    int array[size],temp;
    for(int i=0;i<size;i++){
        
        cout<<"Enter the Array : ";
        cin>>array[i];
    }

    int newSize=0;

    for(int i=0;i<size;i++){
        if(array[i]!=element){
            array[newSize]=array[i];
            newSize++;
        }
    }

    
    for(int i=0;i<newSize;i++){
        cout<<array[i]<<" ";
    }
    return 0;

}
int main(){

    int size,element;

    cout<<"Enter the Size : ";
    cin>>size;

    cout<<"Enter the Element : ";
    cin>>element;

    removeAllOccur(size,element);
    
}