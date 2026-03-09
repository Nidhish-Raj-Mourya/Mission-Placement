#include<iostream>
using namespace std;
int merge_array(int size1,int size2){
    int arr1[size1];
    int arr2[size2];
   
     cout<<"Element of array first: ";
    for(int i =0;i<size1;i++){
        cin>>arr1[i];
    }
    cout<<"Element of array second: ";
    for(int j =0;j<size2;j++){
        cin>>arr2[j];
    }
    cout<<"Concatenate array: ";
    for(int i =0;i<size1;i++){
         cout<<arr1[i]<<" ";
        }
         for(int j=0;j<size2;j++){
              cout<<arr2[j]<<" ";
    }
    return 0;

}
int main(){
    int size1,size2;

    cout<<"Enter the size first array ";
    cin>>size1;

    cout<<"Enter the size of second array ";
    cin>>size2;

    merge_array(size1,size2);

    return 0;

}