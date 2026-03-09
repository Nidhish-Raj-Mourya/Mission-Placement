#include<iostream>
using namespace std;
int copy_array(int size){
    int arr[size];
    int newarr[size];
    for(int i =0;i<size;i++){
        cin>>arr[i];
    }
    for(int i=0;i<size;i++)
    {
    for(int j=1;j<=size;j++){
        newarr[j]=arr[i];
      cout<<newarr[j]<<" "; 
      break;
    }
    
    }
 

    return 0;

}
int main(){
    int size;

    cout<<"Enter the size array ";
    cin>>size;

    copy_array(size);

    return 0;

}