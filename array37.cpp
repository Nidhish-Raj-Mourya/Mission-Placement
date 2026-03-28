#include<iostream>
using namespace std;

int deleteAtK(int size,int position){

    int array[size],temp;
    for(int i=0;i<size;i++){
        
        cout<<"Enter the Array : ";
        cin>>array[i];
    }

    for(int i=position;i<size;i++){

        array[i]=array[i+1];
    }

    for(int i=0;i<size-1;i++){
        cout<<array[i]<<" ";
    }
    
    return 0;

}
int main(){

    int size,position,element;

    cout<<"Enter the Size : ";
    cin>>size;

    cout<<"Enter the Position : ";
    cin>>position;

    deleteAtK(size,position);
    
}