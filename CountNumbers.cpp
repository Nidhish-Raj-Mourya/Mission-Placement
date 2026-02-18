#include<iostream>
using namespace std;

void displayElement(int size, int element){
int array[size],count=0;
    for(int i = 0; i<size; i++){
    cout<<"Enter the value:";
    cin>>array[i];
}
    for(int i = 0; i<size; i++){
   if(array[i]>element){
count++;
}
cout<<count;
}
}
int main(){

    int size , Element;

    cout<<"Enter the size:";
    cin>>size;

    cout<<"Enter the element:";
    cin>>element;

    displayElements(size , Element);
    return 0;
}