#include<iostream>
using namespace std;
int array1(int num){
    int arr[num];
    int count=0;
    for(int i =0;i<num;i++){
        cin>>arr[i];
    }
    for(int i=0;i<num;i++){
        int j;
        for( j=0;j<i;j++){
        if(arr[i]==arr[j]){
        break;
    }
    }
    if(i==j){
        count++;
    }
}
cout<<"the count of unquie numbers is: "<<count;

return 0;
}
int main(){
    int size;

    cout<<"Enter the size of array: ";
    cin>>size;

    array1(size);


    return 0;
}