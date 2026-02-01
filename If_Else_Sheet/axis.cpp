#include<iostream>
using namespace std;
int main(){
    int x,y;
    cout<<"Enter x axis ";
    cin>>x;
    cout<<"Enter y axis ";
    cin>>y;
    if(x>0 &&y>0){
        cout<<"it is in first axis";
    }
    else if(x<0 &&y>0){
        cout<<"it is in second axis";
    }
    else if(x<0 &&y<0){
        cout<<"it is in third axis";
    }
    else if(x>0 &&y<0){
        cout<<"it is in fourth axis";
    }
    else if(x==0&&y==0){
        cout<<"it lies on origin";
    }
    else if(x==0){
        cout<<"it lies on y axis";
    }
    else if(y==0){
        cout<<"it lies on x axis";
    }
    return 0;
}