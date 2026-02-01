#include<iostream>
using namespace std;
int main(){
    int angle1, angle2, angle3;
    cin >> angle1 >> angle2 >> angle3;
    if(angle1 + angle2 + angle3 <= 90)
    {cout << "Acute";}
    else if(angle1 || angle2 || angle3 == 90 )
    {cout << "Right";}
    else if(angle1 && angle2 && angle3 >= 90)
    {cout << "Obtuse";}
    return 0;
}