#include<iostream>
using namespace std;
int array1(int num){

    int arr[num];
    int product =1;
    for(int i=0;i<num;i++){
       cin>> arr[i];

    }
    for(int i=0;i<num;i++){
        cout<< arr[i]<<" ";
        product = product*arr[i];
    }
    cout<<"The product is: "<<product;


    return 0;
}
int main(){
    int size;

    cout<<"Enter the size of array: ";
    cin>>size;

    array1(size);


    return 0;
}