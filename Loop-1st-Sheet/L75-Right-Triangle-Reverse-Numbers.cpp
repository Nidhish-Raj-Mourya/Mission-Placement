#include<iostream>
using namespace std;

int rightTriangle(int number){

    for(int i=1;i<=number;i++){
       for(int j=i;j>=1;j--){
            cout<<j<<" ";
        }
        cout<<endl;
    }
    return 0;
}

int main(){
    int number;

    cout<<"Enter the number : ";
    cin>>number;

    rightTriangle(number);
}