#include<iostream>
using namespace std;
int array1(int num){

    int arr[num];
   int max =0;
    for(int i=0;i<num;i++){
       cin>> arr[i];
    }
    for(int i=0;i<num;i++){
        if(max<arr[i]){
           max = arr[i]; 
        }
    }
    cout<<"The maximum number is "<<max;

    return 0;
}
int main(){
    int size;

    cout<<"Enter the size of array: ";
    cin>>size;

    array1(size);


    return 0;
}