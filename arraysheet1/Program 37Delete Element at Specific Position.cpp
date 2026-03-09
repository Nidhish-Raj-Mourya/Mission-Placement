#include<iostream>
using namespace std;
int array1(int size,int position){
    int arr[size];
    int temp;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=position-1;i<size-1;i++){ 
           if(i==position){
            arr[i]=arr[i+1];
           }
           size--;
    }
    cout<<"After ";
  
     for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    
return 0;
}
int main(){
    int size,position;

    cout<<"Enter the size ";
    cin>>size;

    cout<<"delete element of position ";
    cin>>position;

    array1(size,position);

    return 0;

}