#include<iostream>
using namespace std;

int replaceXwithY(int size,int Xvalue,int Yvalue){

    int array[size],temp;
    for(int i=0;i<size;i++){
        
        cout<<"Enter the Array : ";
        cin>>array[i];
    }

    for(int i=0;i<size;i++){
        if(array[i]==Xvalue){
            array[i]=Yvalue;
        }
    }
    
    for(int i=0;i<size;i++){
        cout<<array[i]<<" ";
    }
    return 0;

}
int main(){

    int size,Xvalue,Yvalue;

    cout<<"Enter the Size : ";
    cin>>size;

    cout<<"Enter the X Element : ";
    cin>>Xvalue;

    cout<<"Enter the Y Element : ";
    cin>>Yvalue;

    replaceXwithY(size,Xvalue,Yvalue);
    
}