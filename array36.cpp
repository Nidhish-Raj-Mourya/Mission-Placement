#include<iostream>
using namespace std;

int insertAtK(int size,int position,int element){

    int array[size],temp;
    for(int i=0;i<size;i++){
        
        cout<<"Enter the Array : ";
        cin>>array[i];
    }

    for(int i=size-1;i>=position;i--){

        array[i+1]=array[i];
    }

    array[position]=element;

    for(int i=0;i<=size;i++){
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

    cout<<"Enter the Element : ";
    cin>>element;

    insertAtK(size,position,element);
    
}