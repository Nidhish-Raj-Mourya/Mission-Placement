#include<iostream>
using namespace std;

int geometricProgression(int firstTerm,int commomRatio,int number){
    int sum=0;
    for(int i =1;i<=number;i++){
        cout<<firstTerm<<" ";
        sum=sum+firstTerm;
        firstTerm=firstTerm*commomRatio;
    }
    cout<<endl<<sum;
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