#include<iostream>
using namespace std;
int array1(int num){

    int arr[num];
    for(int i=0;i<num;i++){
       cin>> arr[i];
    }
    
    int temp = arr[num-1];
   
    for(int i=num-1;i>0;i--){ 
       arr[i]=arr[i-1];
    }
    arr[0]=temp;
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
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