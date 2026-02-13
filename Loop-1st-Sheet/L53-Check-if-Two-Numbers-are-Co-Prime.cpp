#include<iostream>
using namespace std;

int checkCoPrime(int number1,int number2){

    int product=1;
    int numb1,numb2;
    numb1=number1;
    numb2=number2;
    for(int i=1;i<=number1 and i<=number2;i++){
        if(number1%i==0 and number2%i==0){
            product=product*i;
            number1=number1/i;
            number2=number2/i;
        }
    }
    if(product==1){
        cout<<"Co Prime : "<<numb1<<" "<<numb2<<" "<<"Product is : "<<product;
    }
    else{
        cout<<"Not Co Prime : "<<numb1<<" "<<numb2<<" "<<"Product is : "<<product;
    }
    return 0;
}

int main(){

    int numberOne,numberTwo;

    cout<<"Enter the Number : ";
    cin>>numberOne;

    cout<<"Enter the Number : ";
    cin>>numberTwo;

    checkCoPrime(numberOne,numberTwo);
}