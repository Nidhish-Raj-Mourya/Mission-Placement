#include<iostream>
using namespace std;
int root(int y){
    if(y>0){
        cout<<"roots are real";
    }
    if(y==0){
        cout<<"roots are equal";
    }
    if(y<0){
        cout<<"roots are imaginary";
    }
    return 0;
}
int main(){
    int a,b,c,y;
    cout<<"enter coefficient of x :";
    cin>>a;
    cout<<"enter coefficient of y :";
    cin>>b;
    cout<<"enter coefficient of c :";
    cin>>c;
    y=(b*b)-(4*a*c);
    root(y);
}