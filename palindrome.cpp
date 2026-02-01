// #include<iostream>
// using namespace std;
// int main(){
//     int number,firstNumber,secondNumber,palindrome;
//     cout<<"Enter the value : ";
//     cin>>number;
//     firstNumber=number/10;
//     secondNumber=number%10;
//     palindrome=(secondNumber*10)+firstNumber;
//     if(number==palindrome){
//         cout<<"It is a Palindrome";
//     }
//     else{
//         cout<<"It is not a Palindrome";
//     }

// }
#include<iostream>
using namespace std;
int main(){
    int number,firstNumber,secondNumber,thirdNumber,reverse;
    cout<<"Enter the value : ";
    cin>>number;
    firstNumber=number/100;
    secondNumber=(number/10)%10;
    thirdNumber=number%10;
    reverse=((thirdNumber*100)+secondNumber*10)+firstNumber;
    if(number==reverse){
        cout<<"It is a Palindrome";
    }
    else{
        cout<<"It is not a Palindrome";
    }

}