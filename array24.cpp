#include<iostream>
using namespace std;

int firstDuplicateValues(int size){

    int array[size];
    for(int i=0;i<size;i++){
        
        cout<<"Enter the Array : ";
        cin>>array[i];
    }

    for(int i=0;i<size;i++){
        
        for(int j=i+1;j<size;j++){
            if(array[i]==array[j]){
                cout<<"Duplicate Value "<<i<<" "<<j;
                break;
            }
        }
    }

    return 0;
}

int main(){

    int size;

    cout<<"Enter the Size : ";
    cin>>size;

    firstDuplicateValues(size);
    
}