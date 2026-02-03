#include<iostream>
using namespace std;

void digitSeparately(int number){
    int digit=0,reverse=0;

    //forword print
    while(number!=0){
        reverse=reverse*10+(number%10);
        number=number/10;
    }

    number=reverse;

    while(number!=0){
       digit=number%10;
       number=number/10;
       cout<<digit<<endl; 
    }

}

int main(){
    int number;

    cout<<"Enter number:";
    cin>>number;

    digitSeparately(number);    
   
    return 0;
}