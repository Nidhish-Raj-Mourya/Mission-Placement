#include<iostream>
using namespace std;

void displayArray(int size){
int array[size];
    for(int i = 0; i<size; i++){
    cout<<"Enter the value:";
    cin>>array[i];
}
    for(int i = 0; i<size; i++){
    cout<<array[i]<<"";
}
}

int main(){

    int size;

    cout<<"Enter the number:";
    cin>>size;

    displayArray(size);
    return 0;
}