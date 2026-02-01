#include<iostream>
using namespace std;
int main(){
    int age;
    cin >> age;
    if(age >= 0 && age <= 12)
    {cout << "Price is 100";}
    else if(age >= 13 && age <= 18 )
    {cout << "Price is 150";}
    else if(age >= 18 && age <= 59)
    {cout<<"Price is 200";}
    else if(age >= 60)
    {cout<<"Price is 120";}
    return 0;

}