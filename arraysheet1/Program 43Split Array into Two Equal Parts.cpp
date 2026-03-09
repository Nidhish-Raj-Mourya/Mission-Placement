#include<iostream>
using namespace std;
int array1(int num){
    int arr[num];
    for(int i =0;i<num;i++){
        cin>>arr[i];
    }
    if(num%2==0){
        int equal = num/2;
        int arr1[equal];
        int arr2[equal];
        
        for(int i =0;i<equal;i++){
            arr1[i]=arr[i];
            arr2[i]=arr[equal+i];    
        }
        cout<<"First array: ";
        for(int i = 0;i<equal;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
        cout<<"Second array: ";
        for(int i = equal;i<num;i++){
            cout<<arr[i]<<" ";
        }
    }
    else{
        cout<<"Invalid size";
    }
    return 0;
}
int main(){
    int size,element,change;

    cout<<"Enter the size of array: ";
    cin>>size;
    array1(size);


    return 0;
}