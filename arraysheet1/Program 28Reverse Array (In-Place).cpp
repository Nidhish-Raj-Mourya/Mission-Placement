#include<iostream>
using namespace std;
int array1(int num){

    int arr[num];
    for(int i=0;i<num;i++){
       cin>> arr[i];
    }
    int j=num-1;
    for(int i=0;i<(num-1)/2;i++){
        int temp = arr[i];        
        arr[i]=arr[j];
        arr[j]=temp;
        j--;
    }
     for(int i=0;i<num;i++){
       cout<< arr[i]<<" ";
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