#include<iostream>
using namespace std;
int rootUntilSingleDigit(int number){
    int num = number;
    int digit;
    for(int i = 1; number>9; i++){
        int sum = 0;
        for(int i = 1; number != 0; i++){
            digit = number %10;
            sum = sum + digit;
            number = number / 10;
        }
        number = sum;
        cout<<sum << " ";
    }
    return 0;
}
int main(){
int number;
cout<<"Enter a number : ";
cin>>number;
rootUntilSingleDigit(number);
return 0;
}