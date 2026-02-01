#include<iostream>
using namespace std;
int pronic(int number){
    int digit = number*(number+1);
    if(digit==2||digit==6||digit==12||digit==20||digit==30||digit==42||digit==56||digit==72||digit==90){
    cout<<"Its a pronic number: "<<digit;
   }
else{
    cout<<"It is not a pronic number: "<<digit;
}
    return digit;
}
int main()
{
    int number;
    cout<<"number: ";
    cin>>number;
    pronic(number);
    

return 0;
}