#include<iostream>
using namespace std;
int main(){
   int a,b,c,discri,x;
   cout<<"a: ";
   cin>>a;
   cout<<"b: ";
   cin>>b;
   cout<<"c: ";
   cin>>c;
   cout<<"x: ";
   cin>>x;
   discri = (b*b)-4*a*c;
   if(discri>0){
    cout<<"roots are real & distinct.";
   }
   else if(discri==0)
   {
    cout<<"roots real & equal";
   }
   else if(discri<0){
    cout<<"imaginory";
   }
   return 0;
}