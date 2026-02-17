#include<iostream>
using namespace std;
int findPerfectNumber(int number){
    int sum = 0;
    for(int i=1; i<number; i++){
        if(number % i == 0){
            sum += i;
        }
        
    }
    if(sum == number){
        cout<<number<<endl;
    }
    
    return 0;


}
int range(int number){
    for(int i=1; i<=number; i++){
        findPerfectNumber(i);
    }
    return 0;
}
int main(){
    int number;
    cout<<"Enter a number: ";
    cin>>number;
    range(number);
    return 0;
}