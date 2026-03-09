#include<iostream>
using namespace std;
int array1(int num,int element){
    int arr[num];
    int newarr = 0;
    for(int i=0;i<num;i++){
       cin>> arr[i];
    }
    for(int i=0;i<num;i++){
        if(arr[i]!=element){
             arr[newarr] = arr[i];  
            newarr++;
        }
    }
    for(int i =0;i<newarr;i++){
        cout<<arr[i]<<" ";
        }
    
    return 0;
}
int main(){
    int size,element;

    cout<<"Enter the size of array: ";
    cin>>size;

    cout<<"Remove the element: ";
    cin>>element;

    array1(size,element);


    return 0;
}