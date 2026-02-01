#include<iostream>
using namespace std;
int main(){
    float cost=0;
    int usage;
    cout<<"Enter usage";
    cin>>usage;
    if(0<=usage && usage<=5000)
    {
        cost=usage*2;
        if(usage<3000){
        cost-=(15*cost)/100;
    }
    }
    if(5000<=usage && usage<=10000)
    {
        cost=usage*3;
    }
    if(usage>10000)
    {
        cost=usage*5;
    }
    cout<<"the total bill is Rs. "<<cost;
}