#include<iostream>
using namespace std;
int array1(int num){

    int arr[num];
    int sum =0;
    for(int i=0;i<num;i++){
       cin>> arr[i];

    }
    for(int i=0;i<num;i++){
        if(i%2==0){
        sum = sum + arr[i];
        }
    }
    cout<<"The sum is: "<<sum;


    return 0;
}
int main(){
    int size;

    cout<<"Enter the size of array: ";
    cin>>size;

    array1(size);


    return 0;
}