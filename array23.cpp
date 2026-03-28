#include<iostream>
using namespace std;

int duplicateValues(int size){

    int array[size],count=0;
    for(int i=0;i<size;i++){
        
        cout<<"Enter the Array : ";
        cin>>array[i];
    }

    for(int i=0;i<size;i++){
        
        for(int j=i+1;j<size;j++){
            if(array[i]==array[j]){
                count++;
            }
        }
    }

    if(count>=1){
        cout<<"Duplicate Value ";
    }
    else{
        cout<<"Not Duplicate Value ";
    }
    return 0;
}

int main(){

    int size;

    cout<<"Enter the Size : ";
    cin>>size;

    duplicateValues(size);
    
}