#include<iostream>
using namespace std;

int zeroLast(int number){
  int arr[number];

    if(number<1 || number>1000000){
        cout<<"invalid input";
        return 0;
    }

    for(int i=0;i<number;i++){
        cout<<"Enter array element "<<i+1<<" : ";
        cin>>arr[i];
    }

    for(int i=0;i<number;i++){

       if(arr[i]==0){
            int temp=arr[i];

            for(int j=i;j<number-1;j++){   
                arr[j]=arr[j+1];
            }

            arr[number-1]=temp;
       }

    }

    for(int i=0;i<number;i++){
        cout<<arr[i]<<" ";
    }
 
    return 0;
}

int main(){
    int number;

    cout<<"Enter number:";
    cin>>number;

    zeroLast(number);
}