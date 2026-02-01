#include<iostream>
using namespace std;
int divisibleByFive(int n){
    int i=0;
    while(i<=n){
        cout<<i<<" ";
        i=i+5;
    }
}
int main(){
    int n;
    cout<<"Enter the Number ";
    cin>>n;
    divisibleByFive(n);
    return 0;
}