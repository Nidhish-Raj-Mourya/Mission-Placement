#include<iostream>
using namespace std;
int array1(int num,int digit){

    int arr[num];
   int change=0;
   int place = 0;
    for(int i=0;i<num;i++){
       cin>> arr[i];
    }
         for(int i =0;i<num;i++){
        if(arr[i]==digit){
            place =i;
            change++;
        }
    }
    
    if(change==0){
        cout<<"-1 ";
    } 
      cout<<"specific digit place is "<<place;
    return 0;
}
int main(){
    int size,specificnum;

    cout<<"Enter the size of array: ";
    cin>>size;

    cout<<"Enter number that is present in array: ";
    cin>>specificnum;

    array1(size,specificnum);


    return 0;
}