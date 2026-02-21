#include<iostream>
using namespace std;
int array_count(int num){

    int arr[num];
    int count=1;
    if(1<=num&&num<=20){
    for(int i=0;i<num;i++){
       cin>> arr[i];
    }
    for(int i=0;i<num;i++){
        if(1<=arr[i]&&arr[i]<=100000){
        if(arr[0]<arr[i])
        {
            count++;
        }
        if(arr[i]<arr[i])
        {
            count++;
        }
    }
       
    }
     cout<<"The count is: "<<count;
}
    return 0;
}
int main(){
    int size;

    cout<<"Enter the size of array: ";
    cin>>size;

    array_count(size);


    return 0;
}