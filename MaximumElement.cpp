#include<iostream>
using namespace std;

void productOfNumber(int size){
int array[size],max=0,min;
    for(int i = 0; i<size; i++){
    cout<<"Enter the value:";
    cin>>array[i];
}
    for(int i = 0; i<size; i++){
      if(max<array[i]){
        max=array[i];
      }
 }
 for(int i = 0; i<size; i++){
      if(min>array[i]){
        min=array[i];
      }
}
cout<<"Maximum :"<<max<<endl;
cout<<"Minimum :"<<min;
}
int main(){

    int size;

    cout<<"Enter the size:";
    cin>>size;

    productOfNumber(size);
    return 0;
}