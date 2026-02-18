#include<iostream>
using namespace std;

void sumOfArray(int size){
int array[size],sum=0;
    for(int i = 0; i<size; i++){
    cout<<"Enter the value:";
    cin>>array[i];
}
    for(int i = 0; i<size; i++){
    sum = sum+array[i];

}
cout<<sum;
}

int main(){

    int size;

    cout<<"Enter the number:";
    cin>>size;

    sumOfArray(size);
    return 0;
}