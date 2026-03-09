#include<iostream>
using namespace std;
int array1(int num,int element){
    

    int arr[num];
    int min =0;
    for(int i=0;i<num;i++){
       cin>> arr[i];
    }
    for(int i=0;i<num;i++){
        if(element>arr[i]){
          min=arr[i];
        }
    }
    cout<<"The smallest number is "<<min;

    return 0;
}
int main(){
    int size,element;

    cout<<"Enter the size of array: ";
    cin>>size;

    cout<<"Enter the element ";
    cin>>element;

    array1(size,element);


    return 0;
}