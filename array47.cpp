#include<iostream>
using namespace std;

int descendingOrder(int size){

    
    int array[size],count=0;
    for(int i=0;i<size;i++){
        
        cout<<"Enter the Array : ";
        cin>>array[i];
    }

    for(int i=0;i<size-1;i++){
        if(array[i+1]<array[i]){

        }
        else{
            count++;
        }
    }

    if(count==0){
        cout<<"Strictly in Descending Order "<<endl;
    }
    else{
        cout<<"Not Strictly in Descending Order "<<endl;
    }

    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }

    return 0;
}
int main(){

    int size;

    cout<<"Enter the Size : ";
    cin>>size;

    descendingOrder(size);
    
}