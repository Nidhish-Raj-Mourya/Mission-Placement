#include<iostream>
using namespace std;

int mergeTwoArray(int size){

    int array1[size],array2[size],array3[size*2];
    for(int i=0;i<size;i++){
        
        cout<<"Enter the Array 1 : ";
        cin>>array1[i];
    }

    for(int i=0;i<size;i++){
        
        cout<<"Enter the Array 2 : ";
        cin>>array2[i];
    }

    for(int i=0;i<size;i++){
        array3[i]=array1[i];
    }

    for(int i=0;i<size;i++){
        array3[size+i]=array2[i];
    }
    
    for(int i=0;i<size*2;i++){
        cout<<array3[i]<<" ";
    }
    return 0;

}
int main(){

    int size;

    cout<<"Enter the Size : ";
    cin>>size;

    mergeTwoArray(size);
    
}