#include<iostream>
using namespace std;

int duplicateValues(int size){

    int array[size],count=0;
    for(int i=0;i<size;i++){
        
        cout<<"Enter the Array : ";
        cin>>array[i];
    }

    for(int i=0;i<size;i++){
        int j; 
        for(j=0;j<i;j++){
            if(array[i]==array[j]){
                break;
            }   
        }
        if(i==j){
            count++;
        }
    }
    cout<<count;

    return 0;
}

int main(){

    int size;

    cout<<"Enter the Size : ";
    cin>>size;

    duplicateValues(size);
    
}