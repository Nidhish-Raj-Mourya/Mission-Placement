#include<iostream>
using namespace std;

void rightNumber(int number){
    int k=1;
    for(int i=1;i<=number;i++){
    
        for(int j=1;j<=i;j++){
            cout<<k<<" ";
          k++;
        }
        
        cout<<endl;
    }

}

int main(){
    int number;

    cout<<"Enter number:";
    cin>>number;

    rightNumber(number);

}