#include<iostream>
using namespace std;

int allPositionElement(int size,int element){

    int array[size];
    for(int i=0;i<size;i++){
        
        cout<<"Enter the Array : ";
        cin>>array[i];
    }
    for(int i=0;i<size;i++){
        if(array[i]==element){
            cout<<i<<" ";
        }
    }
    return 0;

}

int main(){

    int size,element;

    cout<<"Enter the Size : ";
    cin>>size;

    cout<<"Enter the element : ";
    cin>>element;

    allPositionElement(size,element);
}
