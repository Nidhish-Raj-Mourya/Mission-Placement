#include<iostream>
using namespace std;

int frequencyValues(int size){

    int array[size];
    bool visit[size] = {false};
    for(int i=0;i<size;i++){
        
        cout<<"Enter the Array : ";
        cin>>array[i];
    }

    for(int i=0;i<size;i++){

        if(visit[i]==true){
            continue;
        }
            
        int count=1;

        for(int j=i+1;j<size;j++){
            if(array[i]==array[j]){
                count++;
                visit[j]=true;
            }   
        }
        cout<<array[i]<<" "<<count<<" "<<endl;
    }
    

    return 0;
}

int main(){

    int size;

    cout<<"Enter the Size : ";
    cin>>size;

    frequencyValues(size);
    
}