#include<iostream>
using namespace std;

int fibonaccisum(int num){
    int n1 = 0,n2 = 1,next;
    int sum = 0;
    for(int i=1;i<=num;i++){
        sum = sum + n1;
        next = n1+n2;
        n1=n2;
        n2 = next;
      
    }
    cout<<"Sum of fibonnaci is "<<sum;


return 0;

}
int main(){
    int number;
    cout<<"Enter the number: ";
    cin>>number;

    fibonaccisum(number);

    return 0;
}