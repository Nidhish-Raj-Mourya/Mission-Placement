
#include<iostream>
using namespace std;

int allPosition(int size,int element){

    int array[size],count=0;
    for(int i=0;i<size;i++){

        cout<<"Enter the number : ";
        cin>>array[i];
    }

    for(int i=0;i<size;i++){

        if(array[i]==element){
            cout<<i<<" ";
            count++;
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


    allPosition(size,element);
}