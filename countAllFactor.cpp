#include<iostream>
using namespace std;

void factor(int number){
    int count=1;

    for(int i=1;i<=number/2;i++){

        if(number%i==0){
            cout<<i<<" ";
            count++;
        }
      
    }
    cout<<number<<endl;
    cout<<"count is:"<<count<<endl;

}

int main(){
    int number;

    cout<<"Enter number:";
    cin>>number;

    factor(number);
}