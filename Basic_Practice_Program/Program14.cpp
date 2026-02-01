#include<iostream>
using namespace std;
int main(){
    float length,breadth,perimeter,area;
    cout<<"Enter length \n";
    cin>>length;
    cout<<"Enter breadth \n";
    cin>>breadth;
    perimeter=2*(length+breadth);
    cout<<"The perimeter is "<<perimeter<<"\n";
    area=length*breadth;
    cout<<"The area of Rectangle is "<<area;
    return 0;
}
