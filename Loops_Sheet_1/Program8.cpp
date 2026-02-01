#include<iostream>
using namespace std;
int squareValue(int n){
    int i=1;
    while(n>=i)
    {
        cout<<i*i<<" ";
        i++;
    }
}
int main(){
    int number;
    cout<<"Enter the number up to which square values are to be printed ";
    cin>>number;
    squareValue(number);
    return 0;
}
