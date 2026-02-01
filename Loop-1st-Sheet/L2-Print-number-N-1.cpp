#include<iostream>
using namespace std;

int loopReverse(int number){
    for(int i=number;i>=1;i--){
        cout<<i<<" ";
    }
    return 0;
}

int main(){
    int number,result;
    cout<<"Enter the value : ";
    cin>>number;
    loopReverse(number);

}