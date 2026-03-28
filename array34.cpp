#include<iostream>
using namespace std;

int rotateByK(int size,int k){

    int array[size],temp;
    for(int i=0;i<size;i++){
        
        cout<<"Enter the Array : ";
        cin>>array[i];
    }

    

    for(int i=1;i<=k;i++){
        temp=array[size-1];
        for(int i=size-1;i>=0;i--){
        array[i+1]=array[i];
        }
        array[0]=temp;
    }

    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    return 0;

}
int main(){

    int size,k;

    cout<<"Enter the Size : ";
    cin>>size;

    cout<<"Enter the K : ";
    cin>>k;

    rotateByK(size,k);
    
}