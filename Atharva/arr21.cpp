
#include<iostream>
using namespace std;

int lastOccurance(int size,int element){

    int array[size],count=0;
    for(int i=0;i<size;i++){

        cout<<"Enter the number : ";
        cin>>array[i];
    }

    for(int i=size-1;i>=0;i++){

        if(array[i]==element){
            cout<<i;
            count++;
            break;
        }
    }

    if(count==0){
        cout<<"Not Found ";
    }
    return 0;
}

int main(){

    int size,element;

    cout<<"Enter the size : ";
    cin>>size;

    cout<<"Enter the element : ";
    cin>>element;


    lastOccurance(size,element);
}