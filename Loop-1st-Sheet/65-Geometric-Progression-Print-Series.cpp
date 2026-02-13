#include<iostream>
using namespace std;

int geometricProgression(int firstTerm,int commomRatio,int number){

    for(int i =1;i<=number;i++){
        cout<<firstTerm<<" ";
        firstTerm=firstTerm*commomRatio;
    }
    return 0;
}

int main(){

    int firstTerm,commomRatio,number;

    cout<<"Enter the first Term : ";
    cin>>firstTerm;

    cout<<"Enter the common ratio : ";
    cin>>commomRatio;

    cout<<"Enter the number : ";
    cin>>number;

    geometricProgression(firstTerm,commomRatio,number);
}