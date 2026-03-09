#include<iostream>
using namespace std;
int array1(int num){

    int arr[num];
    int posicount =0; 
    int negacount =0;
    int zerocount =0;
    for(int i=0;i<num;i++){
       cin>> arr[i];

    }
    for(int i=0;i<num;i++){
        if(0<arr[i]){
            posicount++;
        }
        else  if(arr[i]<0){
             negacount++;
        }
        else{
           zerocount++;
        }
    }
    cout<<endl<<"The positive count is "<<posicount;
    cout<<endl<<"The negative count is "<<negacount;
    cout<<endl<<"count of zero is  "<<zerocount;
    
    
    return 0;
}
int main(){
    int size;

    cout<<"Enter the size of array: ";
    cin>>size;

    array1(size);


    return 0;
}