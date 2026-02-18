#include<iostream>
using namespace std;

void productOfNumber(int size){
int array[size],max=0;
    for(int i = 0; i<size; i++){
    cout<<"Enter the value:";
    cin>>array[i];
}
    for(int i = 0; i<size; i++){
      if(max<array[i]){
        max=array[i];
      }
 }
    cout<<max;
}
int main(){

    int size;

    cout<<"Enter the size:";
    cin>>size;

    productOfNumber(size);
    return 0;
}