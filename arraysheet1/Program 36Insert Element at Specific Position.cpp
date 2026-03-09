#include<iostream>
using namespace std;
int array1(int size,int position,int element){
    int arr[size];
    int temp;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=size-1;i>=position;i--){ 
           arr[i+1] = arr[i];
    }
    arr[position]=element;
    cout<<"After ";
  
     for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
    
return 0;
}
int main(){
    int size,position,element;

    cout<<"Enter the size ";
    cin>>size;

    cout<<"Insert position at ";
    cin>>position;

    cout<<"Enter the element ";
    cin>>element;

    array1(size,position,element);

    return 0;

}