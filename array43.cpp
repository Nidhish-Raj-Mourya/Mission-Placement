#include<iostream>
using namespace std;

int concatanateTwoArray(int size){

    if(size%2==0){
        int array[size],arr1[size],arr2[size];
        for(int i=0;i<size;i++){
        
            cout<<"Enter the Array 1 : ";
            cin>>array[i];
        }

        for(int i=0;i<size/2;i++){
            arr1[i]=array[i];
        }
        for(int i=size/2;i<size;i++){
            arr2[i]=array[i];
        }
        
        cout<<"Array 1 : ";
        for(int i=0;i<size/2;i++){
            cout<<arr1[i]<<" ";
        }

        cout<<endl;
        cout<<"Array 2 : ";
        for(int i=size/2;i<size;i++){
            cout<<arr2[i]<<" ";
        }
    }
    else{
        cout<<"Size is Odd ";
    }
    
    return 0;
}
int main(){

    int size;

    cout<<"Enter the Size : ";
    cin>>size;

    concatanateTwoArray(size);
    
}