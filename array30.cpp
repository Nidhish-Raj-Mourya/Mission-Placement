#include<iostream>
using namespace std;

int swapIandJ(int size,int i,int j){

    int array[size],temp;
    for(int k=0;k<size;k++){
        
        cout<<"Enter the Array : ";
        cin>>array[k];
    }
    
    temp=array[i];
    array[i]=array[j];
    array[j]=temp;
    
    for(int k=0;k<size;k++){
        cout<<array[k]<<" ";
    }
    return 0;

}
int main(){

    int size,i,j;

    cout<<"Enter the Size : ";
    cin>>size;

    cout<<"Enter the I : ";
    cin>>i;

    cout<<"Enter the J : ";
    cin>>j;

    swapIandJ(size,i,j);
    
}