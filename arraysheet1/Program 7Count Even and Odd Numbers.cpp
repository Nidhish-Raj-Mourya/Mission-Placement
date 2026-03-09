#include<iostream>
using namespace std;
int array1(int num){

    int arr[num];
    int evencount =0,oddcount=0;
    for(int i=0;i<num;i++){
       cin>> arr[i];

    }
    for(int i=0;i<num;i++){
        if(arr[i]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    cout<<"Even count is "<<evencount;
    cout<<endl<<"Odd count is "<<oddcount;
    
    
    return 0;
}
int main(){
    int size;

    cout<<"Enter the size of array: ";
    cin>>size;

    array1(size);


    return 0;
}