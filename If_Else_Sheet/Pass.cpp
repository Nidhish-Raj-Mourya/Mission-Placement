#include<iostream>
using namespace std;
int main(){
    int marks;
    cout<<"Enter marks out of hundred";
    cin>>marks;
    if(marks>=40){
        cout<<"you are passed";
    }
    else
    {
        cout<<"you are failed";
    }
    return 0;
}