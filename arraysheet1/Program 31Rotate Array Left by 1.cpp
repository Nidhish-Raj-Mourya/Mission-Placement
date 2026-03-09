#include<iostream>
using namespace std;
int array1(int num){

    int arr[num];
    for(int i=0;i<num;i++){
       cin>> arr[i];
    }
    int val=0;
    int temp=arr[0];
    for(int i=1;i<num;i++){ 
       arr[val]=arr[i];
       val++;
    }
    arr[num-1]=temp;
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