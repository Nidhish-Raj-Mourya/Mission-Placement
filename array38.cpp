#include<iostream>
using namespace std;

int insertSorted(int size,int element){

    int array[size],temp;
    for(int i=0;i<size;i++){
        
        cout<<"Enter the Array : ";
        cin>>array[i];
    }

    for(int i=0;i<size;i++){
        for(int j=i+1;j<size;j++){
            if(array[j]<array[i]){
                temp=array[i];
                array[i]=array[j];
                array[j]=temp;
            }

        }
    }

    for(int i=0;i<=size;i++){
        if(array[i]>element){
            for(int j=size-1;j>=i;j--){

                array[j+1]=array[j];
            }
        array[i]=element;
        break;
        }
    }
    
    for(int i=0;i<=size;i++){
        cout<<array[i]<<" ";
    }
    return 0;

}
int main(){

    int size,element;

    cout<<"Enter the Size : ";
    cin>>size;

    cout<<"Enter the Element : ";
    cin>>element;

    insertSorted(size,element);
    
}