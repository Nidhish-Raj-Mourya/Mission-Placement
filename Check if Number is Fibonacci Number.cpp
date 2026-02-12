#include<iostream>
using namespace std;

int fibonacci(int num){
    int n1 = 0,n2 = 1,next;
    for(int i=1;i<=num;i++){
        next = n1+n2;
        n1=n2;
        n2 = next;
    }
    if(next==num){
            cout<<"The number is presnt in series "<<next;
        }
        else{
             cout<<"The number is not presnt in series "<<next;
        }
return 0;

}
int main(){
    int number;
    cout<<"Enter the specific number: ";
    cin>>number;

    fibonacci(number);

    return 0;
}