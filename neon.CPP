#include<iostream>
using namespace std;
int neon(int number){
    int neon = number*number;
    int digit1 = neon/10;
    int digit2 = neon%10;
    if(n==(digit1+digit2)){
        cout<<neon<<" it is neon number";
    }
    else{
        cout<<neon<<" it is not neon number";
    }
    
return 0;

}
    int main()
{
    int number;
    cout<<"number: ";
    cin>>number;
    neon(number);
return 0;
}