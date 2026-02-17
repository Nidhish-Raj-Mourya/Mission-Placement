#include<iostream>
using namespace std;
int factNumber(int number){
    int divide = 1;
    for(int i =2; i<=number; i++)
    {
         if(number % i == 0 ){
            divide = number/ i ;
            cout<<i<<" "<<divide<<endl;
         }

    }
    
    return 0;
}

int main(){
    int number;
    cout<<"Enter a number ";
    cin>>number;
    factNumber(number);
    return 0;
}