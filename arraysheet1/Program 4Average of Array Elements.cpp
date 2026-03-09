#include<iostream>
using namespace std;
int array1(int num){

    int arr[num];
    float sum =0,average =0;
    for(int i=0;i<num;i++){
       cin>> arr[i];

    }
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
        sum = sum + arr[i];
        average = sum/num;
    }
    cout<<endl<<"The sum is: "<<sum<<endl;
    cout<<"The average is: "<<average;


    return 0;
}
int main(){
    int size;

    cout<<"Enter the size of array: ";
    cin>>size;

    array1(size);


    return 0;
}