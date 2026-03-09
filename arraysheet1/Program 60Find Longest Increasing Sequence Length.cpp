#include<iostream>
using namespace std;
int length(int size,int arr[]){
    int length = 1;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    for(int i = 0;i<size-1;i++){
        if(arr[i]<arr[i+1]){
            length++;
        }
        else{
            length=1;
        }
    }
    cout<<length;

return 0;
}
int main(){
    int size;
    int arr[size];

    cout<<"Enter the size: ";
    cin>>size;

    cout<<"Elements of array: ";

    length(size,arr);

    return 0;
}