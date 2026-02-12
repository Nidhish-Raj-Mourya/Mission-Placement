#include<iostream>
using namespace std;
int pattern(int row){
    for(int i =1;i<=row;i++){
        for(int j =1;j<=row;j++){
            if(i==1||i==row||j==1||j==row){
                cout<<j<<" ";
        }
        else{
            cout<<"  ";
            }
        }
         cout<<endl;
    }
    return 0;
}
int main(){
    int row;

    cout<<"Enter the number of rows: ";
    cin>>row;

    pattern(row);

    return 0;
}