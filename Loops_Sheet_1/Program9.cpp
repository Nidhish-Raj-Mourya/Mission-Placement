#include<iostream>
using namespace std;
int cubeValue(int n){
    int i=1;
    while(n>=i)
    {
        cout<<i*i*i<<" ";
        i++;
    }
}
int main(){
    int number;
    cout<<"Enter the number up to which cubr values are to be printed ";
    cin>>number;
    cubeValue(number);
    return 0;
}