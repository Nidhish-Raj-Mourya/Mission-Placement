#include<iostream>
using namespace std;

int multiplicationTable(int number){
    for(int i=1;i<=10;i++){
        cout<<number<<" x "<<i<<" = "<<number*i<<endl;
    }
    return 0;
}

int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    multiplicationTable(number);

}