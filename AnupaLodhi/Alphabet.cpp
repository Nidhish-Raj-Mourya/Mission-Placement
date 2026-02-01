#include<iostream>
using namespace std;
int main(){
    int ascii;
    char input;
    cout << "Enter a character: ";
    cin >> input;
    ascii = int(input);
    if(65 <= ascii && ascii <= 77)
    {cout <<"First Half";}
    else if(78 <= ascii && ascii <= 90)
    {cout << "Second Half";}
    return 0;
}