#include<iostream>
using namespace std;
int arrayfunc(int num,int arr[]){

    int val=0;
    int temp=arr[0];
    for(int i=1;i<num;i++)
    { 
       arr[val]=arr[i];
       val++;
    }
    arr[num-1]=temp;
    
    return arr[num];
}
int array1(int num,int shift){

    int arr[num];
    for(int i=0;i<num;i++){
        cout<<"Enter the "<<i<<" position element: ";
       cin>>arr[i];
    }
    
    for(int i=1;i<=shift;i++){ 
       arr[num]=arrayfunc(num,arr);
    }
    
    for(int i=0;i<num;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
int main(){
    int size,rotate;

    cout<<"Enter the size of array: ";
    cin>>size;

    cout<<"Array rotates by ";
    cin>>rotate;

    array1(size,rotate);


    return 0;
}