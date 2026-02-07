#include<iostream>
using namespace std;


    void checkdivisibleby9(int number){
    if(number % 9 == 0)
    cout<<"Number is divisible by 9";
 else
    cout<<"Number is not divisible by 9";
}

int main(){

    int number;

    cout<<"Enter the number:";
    cin>>number;

checkdivisibleby9(number);
return 0;

}