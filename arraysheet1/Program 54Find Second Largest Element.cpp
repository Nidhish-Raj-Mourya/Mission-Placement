#include<iostream>
using namespace std;
int array1(int num){

    int arr[num];
   int max = 0;
   int second = 0;
    for(int i=0;i<num;i++){
       cin>> arr[i];
    }
    for(int i =0;i<num;i++){
     if (arr[i] > max) {
        second = max;   
        max = arr[i];   
        } 
        if(arr[i]< max&&second!=max) {
            second = arr[i]; 
        }
    }
    if(second!=0){
        cout<<"Second largest element: "<< second;
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