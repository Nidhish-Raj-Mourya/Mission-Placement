#include<iostream>
using namespace std;


void factorialOfNumber(int num)
{
    int fact = 1;
    for(int i =1; i<= num; i++)
    {
      fact = fact *i;
    }    
    cout<<"Factorial of Number " << num << " is: " << fact << endl;
}
int main(){
    int N;
    cout<<"Enter the number:";
    cin>>N; 
  factorialOfNumber(N);
    return 0;

}
