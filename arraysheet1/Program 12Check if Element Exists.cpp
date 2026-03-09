#include<iostream>
using namespace std;
int array1(int num,int digit){

    int arr[num];
   int change=0;
    for(int i=0;i<num;i++){
       cin>> arr[i];

    }
    for(int i=0;i<num;i++){
        if(arr[i]==digit){
        
            change++;
        }
        
    }
    if(change==0)
    {
            cout<<digit<<" is not present";
        }
        else{
            cout<<digit<<" specific digit is present ";
        }
    
     
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