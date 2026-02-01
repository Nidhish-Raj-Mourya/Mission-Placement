#include<iostream>
using namespace std;
int specificdigit(int number,int specific){
    while(number!=0){
        int digit=number%10;
        if(digit==specific){
            cout<<specific<<" it contain digit";
        }
        number = number/10;
    }
    return 0;
    
}
int main(){
    int number,specific;
    cout<<"number: ";
    cin>>number;
    cout<<"specific digit: ";
    cin>>specific;
    specificdigit(number,specific);
    return 0;

}