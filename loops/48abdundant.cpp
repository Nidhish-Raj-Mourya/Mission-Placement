#include<iostream>
using namespace std;
int allPerfectNumber(int number){
    int sumofdivisor = 0;
    for(int i = 1; i < number; i++){
        if(number % i == 0){
            sumofdivisor = sumofdivisor + i;
        }
    }
    if(sumofdivisor > number){
        cout<<"It is abdundant number "<<endl;
    }
    else
    {
        cout<<"It is not an abdundant number "<<endl;
    }
    return 0;
}
int main(){
    int number;
    cout<<"Enter a number ";
    cin>>number;
    allPerfectNumber(number);
    return 0;

}