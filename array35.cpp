#include<iostream>
using namespace std;

int copyArray(int size,int k){

    int array1[size],array2[size],temp;
    for(int i=0;i<size;i++){
        
        cout<<"Enter the Array : ";
        cin>>array1[i];
    }

    for(int i=0;i<size;i++){

        array2[i]=array1[i];
    }
    for(int i=0;i<size;i++){
        cout<<array2[i]<<" ";
    }
    return 0;

}
int main(){

    int size,k;

    cout<<"Enter the Size : ";
    cin>>size;
    
    copyArray(size,k);
    
}