#include<iostream>
using namespace std;
int array1(int num){

    int arr[num];
    for(int i=0;i<num;i++){
       cin>> arr[i];
    }
    for(int i=0;i<num;i++){
        int temp = arr[0];        
        arr[0]=arr[num-1];
        arr[num-1]=temp;
    
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
    break;
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