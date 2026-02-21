#include<iostream>
using namespace std;

int countGreater(int number){
  int arr[number];

    if(number<1 || number>20){
        cout<<"invalid input";
        return 0;
    }

    for(int i=0;i<number;i++){
        cout<<"Enter array element "<<i+1<<" : ";
        cin>>arr[i];
    }
    int count=0;

    for(int i=0;i<number-1;i++){
        int max=arr[i];
        if(max<arr[i+1]){
            count++;
        }
    }
    cout<<count;

    return 0;
}

int main(){
    int number;

    cout<<"Enter number:";
    cin>>number;

    countGreater(number);
}