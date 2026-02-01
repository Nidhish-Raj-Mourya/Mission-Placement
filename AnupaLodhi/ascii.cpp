#include<iostream>
using namespace std;
int main(){
    int ascii;
    char input;
    cout << "Enter a character:";
    cin >> input;
    ascii = int(input);
    if(65 <= ascii && ascii <= 90)
    cout<<"It is between A-Z";
    else if(97 <= ascii && ascii <=122)
    cout << "It is between a=z";
    else if(48 <= ascii && ascii <= 57)
    cout << "It is between 0-9";
    else
    cout << "It is a special character";
    return 0;
}