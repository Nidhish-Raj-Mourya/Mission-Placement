#include<iostream>
using namespace std;
int sumNatural(int n){
    int sum=0;
    while(n>=1){
        cout<<n<<" ";
        sum+=n;
        n--;
    }
    cout<<"The sum up to N term is "<<sum;
}
int main(){
    int number;
    cout<<"Enter number up to which sum is to be calculated";
    cin>>number;
    sumNatural(number);
    return 0;
}