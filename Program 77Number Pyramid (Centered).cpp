#include<iostream>
using namespace std;
int pattern(int row){
    for(int i = 1;i<=row;i++){
        for(int j =row;j>=i;j--){
        cout<<" ";
        }
        for(int j = 1;j<=i;j++){
        cout<<j<<" ";
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