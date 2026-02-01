#include<iostream>
using namespace std;
int main(){
    int side1, side2, side3;
    cin >> side1 >> side2 >> side3;
    if(side1 == side2 && side2 == side3)
    {cout << "Triangle is equilateral";}
    else if (side1 == side2 || side2 == side3 || side1 == side3)
    {cout << "Triangle is isosceles";}
    else
    {cout << "Triangle is scalene";}
    return 0;

}