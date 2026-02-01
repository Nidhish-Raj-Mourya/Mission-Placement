#include<iostream>
using namespace std;
int divisiblebySeven(int number){
    int i=0,count=0;
    while(number>=i){
        if(i%7==0)
        {count++;
        cout<<i<<" ";
        }
        i++;   
    }
    cout<<"count is "<<count;
}
int main(){
int number;
cout<<"enter the number";
cin>>number;
divisiblebySeven(number);
}