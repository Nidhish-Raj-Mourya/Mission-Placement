#include<iostream>
using namespace std;

int arithmeticProgression(int firstTerm,int commomDifference,int number){
    int sum=0;
    for(int i =1;i<=number;i++){
        cout<<firstTerm<<" ";
        sum=sum+firstTerm;
        firstTerm=firstTerm+commomDifference;
    }
    cout<<endl<<sum;
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