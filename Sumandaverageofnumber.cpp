#include <iostream>
using namespace std;

int main(){

   float a,b,c;
   float sum, average;

   cout<<"Enter the first number:";
   cin>> a;
   
   cout<<"Enter the second number:";
   cin>> b; 

   cout<<"Enter the second number:";
   cin>> c; 


   sum = a+b+c;
   average = sum/3;

   cout<<" sum is =" <<sum << endl;
   cout<<" average is =" <<average << endl;

   return 0;
}

