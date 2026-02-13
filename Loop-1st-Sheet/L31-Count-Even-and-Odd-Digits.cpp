#include<iostream>
using namespace std;

int evenCount(int number){
    int evenCount=0;
    for(int i=1;i<=number;i++){
        if(i%2==0){
            evenCount++;
        }
    }
    cout<<evenCount<<" ";
    return 0;
}

int oddCount(int number){
    int oddCount=0;
    for(int i=1;i<=number;i++){
        if(i%2!=0){
            oddCount++;
        }
    }
    cout<<oddCount<<" ";
    return 0;
}

int main(){
    int number;

    cout<<"Enter the number : ";
    cin>>number;

    evenCount(number);
    oddCount(number);
}