#include <iostream>
using namespace std;

int main(){

   int a,b,c;

   cout<<"Enter the first number:";
   cin>>a;
   cout<<"Enter the second number:";
   cin>>b;
   cout<<"Enter the third number:";
   cin>>c;

   if(a <= b && a <= c){
    cout<<"Smallest number:"<<a<<endl;
   } else if(b <= c && c <= a )
{
   cout<<"Smallest number:"<<b<<endl;
} else {
cout<<"Smallest number:"<<c<<endl;

   }


return 0;

}


