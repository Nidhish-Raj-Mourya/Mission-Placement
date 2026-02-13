#include<iostream>
using namespace std;

int separatelyDigit(int number){
    int digitFirst,digitSecond,reverse;
    for(int i=1;number!=0;i++){
        digitFirst=number%10;
        reverse=(reverse*10)+digitFirst;
        number=number/10;
    }
    cout<<reverse<<endl;
    for(int i=1;reverse!=0;i++){
        digitSecond=reverse%10;
        reverse=reverse/10;
        cout<<digitSecond<<endl;
    }
    return 0;
}

int main(){

    int number;

    cout<<"Enter the number : ";
    cin>>number;
    
    separatelyDigit(number);
}