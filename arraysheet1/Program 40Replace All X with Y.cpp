#include<iostream>
using namespace std;
int array1(int num,int element,int change){
    int arr[num];

    for(int i=0;i<num;i++){
       cin>> arr[i];
    }
    for(int i=0;i<num;i++){
        if(arr[i]==element){
             arr[i] = change;  
       
        }
    }
    for(int i =0;i<num;i++){
        cout<<arr[i]<<" ";
        }
    
    return 0;
}
int main(){
    int size,element,change;

    cout<<"Enter the size of array: ";
    cin>>size;

    cout<<"Remove the element: ";
    cin>>element;

    cout<<"Insert the element ";
    cin>>change;

    array1(size,element,change);


    return 0;
}