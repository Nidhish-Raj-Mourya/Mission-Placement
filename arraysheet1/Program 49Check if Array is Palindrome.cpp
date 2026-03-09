#include<iostream>
using namespace std;
int array1(int num){
    int arr[num];
    int count =0;
    for(int i=0;i<num;i++){
       cin>> arr[i];
    }
     for (int i = 0;i< num/2;i++) {
        if (arr[i]==arr[num-1-i]) {
            count++;
        }
    }
if(count==num/2){
    cout<<"Array is palindrome";
}    
else{
    cout<<"Array is not palindrome";
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