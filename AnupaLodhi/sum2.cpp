#include<iostream>
using namespace std;
int main(){
    int side1, side2, side3;
    cin >> side1 >> side2 >> side3;
    if(side1 + side2 >= side3)
    {cout << "Valid triangle";}
    else if (side2 + side3 >= side1)
    {cout << "Valid triangle";} 
    else 
     {cout << "Invalid triangle";}
     return 0;
}