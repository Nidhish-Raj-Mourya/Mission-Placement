#include<iostream>
using namespace std;
int array1(int num){

    int arr[num];
   int change ,count=0;
    for(int i=0;i<num;i++){
       cin>> arr[i];
    }
    for(int i=0;i<num;i++){
           change = arr[i]; 
    
        for(int j = i+1;j<num;j++){
        if(arr[j]==change){
            count++;
        }
    }
}if(count!=0){
    cout<<"Yes duplicate number is present "<<count;
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