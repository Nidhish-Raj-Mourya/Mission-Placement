#include<iostream>
using namespace std;
int automorphic(int number){
    int square=number*number;
    square=square%100;
    if(number==square){
        cout<<"it is automorphic";
    }
    else{
        cout<<"it is not automorphic";
    }
}
int main(){
    int number;
    cout<<"enter two digit number";
    cin>>number;
    automorphic(number);
}