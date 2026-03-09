#include<iostream>
using namespace std;
int array1(int num){
    int arr[num];

    for(int i=0;i<num;i++){
       cin>> arr[i];
    }
    for(int i=0;i<num;i++){
        if(arr[i]!=0){
             cout<<arr[i]<<" ";  
        }
    }
    for(int i=0;i<num;i++){
        if(arr[i]==0){
            cout<<arr[i]<<" ";
        }
    }
    
    
    return 0;
}
int main(){
    int size;

    cout<<"Enter the size of array: ";
    cin>>size;


    array1(size);


    return 0;
}