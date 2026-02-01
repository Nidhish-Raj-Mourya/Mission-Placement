#include<iostream>
using namespace std;
int main(){
   float radius,length,width,area,perimeter;
   cout<<"The radius of circle is: ";
   cin>>radius;
   area = 3.14*radius* radius;
   cout<<"The area of circle is: "<<area;
   cout<<"the length of rectangle is: ";
   cin>>length;
   cout<<"The width of rectangle is: ";
   cin>>width;
   perimeter = 2*(length+width);
   cout<<"The perimeter of rectangle is: "<<perimeter;
   area = length*width;
   cout<<"The area of retangle is: "<<area;
   cout<<"The length of square is: ";
   cin>>length;
   perimeter = 4*length;
   cout<<"The perimeter of square is : "<<perimeter;
   area = length*length;
   cout<<"The area of square is: "<<area;
   

    
    return 0;
}