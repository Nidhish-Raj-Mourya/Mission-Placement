#include<iostream>
using namespace std;

int sumCube(int number){
    int sum=0,result=0;
    
    for(int i=1;i<=number;i++){
        sum=i*i*i;
        result= result+sum;
    }
    cout<<result;
    return 0;
}
 
int main(){
    int number;
    cout<<"Enter the number : ";
    cin>>number;
    sumCube(number);
}