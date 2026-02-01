#include<iostream>
using namespace std;
int main(){
    int ascii;
    char input;
    cout <<"Enter a character:";
    cin >> input;
    ascii = int(input);
    if(65 <= ascii && ascii <= 90)
    cout << "Uppercase Letter";
    else if(97 <= ascii && ascii <= 122)
    cout << "Lowercase Letter";
    return 0;
}