#include<iostream>
using namespace std;

int palindromeOrder(int size){

    
    int array[size],count=0;
    for(int i=0;i<size;i++){
        
        cout<<"Enter the Array : ";
        cin>>array[i];
    }

    for(int i=0;i<size/2;i++){
        if(array[i]==array[size-1-i]){
            
        }
        else{
            count++;
        }
    }

    if(count==0){
        cout<<"Palindrome "<<endl;
    }
    else{
        cout<<"Not Palindrome"<<endl;
    }

    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }

    return 0;
}
int main(){

    int size;

    cout<<"Enter the Size : ";
    cin>>size;

    palindromeOrder(size);
    
}