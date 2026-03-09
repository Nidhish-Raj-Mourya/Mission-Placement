#include<iostream>
using namespace std;
int array1(int num){
    int arr[num];
    int count =0;
    for(int i=0;i<num;i++){
       cin>> arr[i];
    }
    for(int i=0;i<num;i++){
    for(int j=i;j<num;j++){
        if(arr[i]==arr[j]){
            count++;
        }
    }
}
if(count!=0){
    cout<<"Yes";
}    
    return 0;
}
int main(){
    int size;

    cout<<"Enter the size of array: ";
    cin>>size;


    array1(size);


    return 0;
}