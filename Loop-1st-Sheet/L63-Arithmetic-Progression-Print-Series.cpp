#include<iostream>
using namespace std;

int arithmeticProgression(int firstTerm,int commomDifference,int number){

    for(int i =1;i<=number;i++){
        cout<<firstTerm<<" ";
        firstTerm=firstTerm+commomDifference;
    }
    return 0;
}

int main(){

    int firstTerm,commomDifference,number;

    cout<<"Enter the first Term : ";
    cin>>firstTerm;

    cout<<"Enter the common diff : ";
    cin>>commomDifference;

    cout<<"Enter the number : ";
    cin>>number;

    arithmeticProgression(firstTerm,commomDifference,number);
}