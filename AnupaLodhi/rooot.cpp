#include<iostream>
using namespace std;
int main(){
    int a, b, c;
    cin >> a >> b >> c;
    int discriminant = b * b - 4 * a * c;
    if (discriminant > 0)
     {cout << "Real & Distinct";}
     else if(discriminant == 0)
     {cout << "Real & Equal";}
     else if(discriminant < 0)
     {cout << "Imaginary";}
     return 0;
}
