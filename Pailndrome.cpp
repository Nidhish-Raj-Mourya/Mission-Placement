#include<iostream>
using namespace std;

void checkpailndrome(int number)

num = number % 10;

int main(){

    int number , lastdigit , firstdigit;

    cout<<"Enter the number:";
    cin>>number;

    firstdigit = number % 10;
    lastdigit = number / 10;

    if(firstdigit == lastdigit)
        cout<<"It is Palindrome";
    else 
    cout<<"It is not Palindrome";



    return 0;

    }





