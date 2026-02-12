#include<iostream>
using namespace std;

int fibonacci(int num){
    int n1 = 0,n2 = 1,next;
    cout<<n1<<" ";
    cout<<n2<<" ";
    for(int i=1;i<=num;i++){
        next = n1+n2;
        n1=n2;
        n2 = next;
        cout<<next<<" ";
    }


return 0;

}
int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;

    fibonacci(number);

    return 0;
}