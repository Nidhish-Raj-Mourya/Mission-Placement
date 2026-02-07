#include<iostream>
using namespace std;

void factor(int number){
    int sum=0;

    for(int i=1;i<=number/2;i++){

        if(number%i==0){
            cout<<i<<" ";
            sum=sum+i;
        }
      
    }

    cout<<"sum is:"<<sum<<endl;

}

int main(){
    int number;

    cout<<"Enter number:";
    cin>>number;

    factor(number);
}