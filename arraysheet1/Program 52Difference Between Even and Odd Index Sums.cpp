#include<iostream>
using namespace std;
int array1(int num){

    int arr[num];
    int sum =0,diff=0;
    for(int i=0;i<num;i++){
       cin>> arr[i];

    }
    for(int i=0;i<num;i++){
        if(i%2==0){
        sum = sum + arr[i];
      
        }
        else{
            diff = diff + arr[i];
             
        }
    }
  cout<<"the sum of even position: "<<sum<<endl;
    cout<<"the sum of odd position: "<<diff<<endl;
    if(sum>diff){
        diff = sum - diff;
    cout<<"The difference is: "<<diff;
    }
    else{
        diff = diff - sum;
    cout<<"The difference is: "<<diff;

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