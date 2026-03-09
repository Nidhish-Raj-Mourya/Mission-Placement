#include<iostream>
using namespace std;
int array1(int num,int first,int second){

    int arr[num];
    for(int i=0;i<num;i++){
       
       cin>> arr[i];
    }
    for(int i=0;i<num;i++){
        int temp = arr[first];        
        arr[first]=arr[second];
        arr[second]=temp;
    
    for(int i=0;i<num;i++){
      cout<<arr[i]<<" ";
    }
      break;
}
    return 0;
}
int main(){
    int size,position_first,position_second;

    cout<<"Enter the size of array: ";
    cin>>size;

    cout<<"Enter the first position: ";
    cin>>position_first;

     cout<<"Enter the second position: ";
     cin>>position_second;


    array1(size,position_first,position_second);


    return 0;
}