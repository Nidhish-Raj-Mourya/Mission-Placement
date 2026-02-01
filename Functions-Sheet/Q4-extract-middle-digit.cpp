#include<iostream>
using namespace std;
int extract(){
    int number;
    cout<<"Enter the value : ";
    cin>>number;
    number=(number/10)%10;
    cout<<number;
    return 0;
}
int main(){
    extract();
}