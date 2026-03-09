#include<iostream>
using namespace std;
int array1(int num){

    int arr[num];
    int count =0;
    float sum =0,average =0;
    for(int i=0;i<num;i++){
       cin>> arr[i];
         sum = sum + arr[i];
        average = sum/num;

    }
    for(int i=0;i<num;i++){
        if(arr[i]<average){
            count++;
    }
}
    cout<<"The average is: "<<average<<endl;
    cout<<"Count of elements that are greater than the array average "<<count;
    


    return 0;
}
int main(){
    int size;

    cout<<"Enter the size of array: ";
    cin>>size;

    array1(size);


    return 0;
}