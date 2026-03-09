#include<iostream>
using namespace std;
int array1(int num){
    int arr[num];
    int dist[num];
    int count=0;
    for(int i =0;i<num;i++){
        cin>>arr[i];
    }
    for(int i=0;i<num;i++){
        int j;
        for(j=0;j<i;j++){
        if(arr[i]==arr[j]){
    }
    }
    if(i==j){
        dist[count]=arr[i];
        count++;
    }
}
for(int i=0;i<count;i++){
    int freq=0;
    for(int j=0;j<num;j++){
        if(dist[i]==arr[j]){
            freq++;
        }
    }
    cout<<dist[i]<<" appered "<<freq<<" times"<<endl;
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