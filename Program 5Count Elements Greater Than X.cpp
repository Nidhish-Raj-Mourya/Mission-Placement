#include<iostream>
using namespace std;
int array1(int num,int digit){

    int arr[num];
    int count =0;
    for(int i=0;i<num;i++){
       cin>> arr[i];

    }
    for(int i=0;i<num;i++){
        if(arr[i]>digit){
            count++;
        }
    }
     cout<<count;
    
    return 0;
}
int main(){
    int size,greater;

    cout<<"Enter the size of array: ";
    cin>>size;

    cout<<"Enter number that is greater then: ";
    cin>>greater;

    array1(size,greater);


    return 0;
}