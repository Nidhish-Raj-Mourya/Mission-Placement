#include<iostream>
using namespace std;
int pattern(int row){
    int value = 1;
    for(int i = 1;i<=row;i++){
        for(int j = 1;j<=i;j++){
        cout<<value<<" ";
        value++;
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