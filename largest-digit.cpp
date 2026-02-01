#include<iostream>
using namespace std;
int main(){
    int number,firstNumber,secondNumber,thirdNumber,fourthNumber;
    cout<<"Enter the number : ";
    cin>>number;
    firstNumber=number/1000;
    secondNumber=(number/100)%10;
    thirdNumber=(number/10)%10;
    fourthNumber=number%10;
    if(firstNumber<secondNumber and firstNumber<thirdNumber and firstNumber<fourthNumber){
        cout<<"First digit is the smallest : "<<firstNumber;
    }
    else if(secondNumber<thirdNumber and secondNumber<fourthNumber){
        cout<<"Second digit is the smallest : "<<secondNumber;
    }
    else if(thirdNumber<fourthNumber){
        cout<<"Third digit is the smallest : "<<thirdNumber;
    }
    else {
        cout<<"Fourth digit is the smallest : "<<fourthNumber;
    }
}
// #include<iostream>
// using namespace std;
// int main(){
//     int number,firstNumber,secondNumber,thirdNumber,fourthNumber;
//     cout<<"Enter the number : ";
//     cin>>number;
//     firstNumber=number/1000;
//     secondNumber=(number/100)%10;
//     thirdNumber=(number/10)%10;
//     fourthNumber=number%10;
//     if(firstNumber>secondNumber){
//         if(firstNumber>thirdNumber){
//             if(firstNumber>fourthNumber){
//                 cout<<"First digit is the largest : "<<firstNumber;
//             }
//         }
//     }
//     else if(secondNumber>thirdNumber){
//         if(secondNumber>fourthNumber){
//             cout<<"Second digit is the largest : "<<secondNumber;
//         }
//     }
//     else if(thirdNumber>fourthNumber){
//         cout<<"Third digit is the largest : "<<thirdNumber;
//     }
//     else{
//         cout<<"Fourth digit is the largest : "<<fourthNumber;
//     }
// }