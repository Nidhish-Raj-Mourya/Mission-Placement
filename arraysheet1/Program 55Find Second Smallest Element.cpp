#include<iostream>
using namespace std;
int array1(int num){

    int arr[num];
   int min = 0;
   int second = 0;
    for(int i=0;i<num;i++){
       cin>> arr[i];
    }
    for(int i =0;i<num;i++){
     if (arr[i] < min) {
        second = min;   
        min = arr[i];   
        } 
        if(arr[i]< min&&second!=min) {
            second = arr[i]; 
        }
    }
    if(second!=0){
        cout<<"Second smallest element: "<< second;
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