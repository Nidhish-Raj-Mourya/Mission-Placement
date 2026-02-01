#include<iostream>
using namespace std;
int main(){
    int passwordLength,upperCaseLength,lowerCaseLength,digits;
    cout<<"Enter password length \n";
    cin>>passwordLength;
    cout<<"Enter Upper Case length \n";
    cin>>upperCaseLength;
    cout<<"Enter Lower Case length \n";
    cin>>lowerCaseLength;
    cout<<"Enter digits length \n";
    cin>>digits;
    if(passwordLength>=8){
         if(upperCaseLength>0&&lowerCaseLength>0&&digits>0)
        {
        cout<<"Strong password";
        }
            
    }
    else if(passwordLength>=6)
    {
        if((upperCaseLength>0&&digits>0)||(lowerCaseLength>0&&digits>0)||(upperCaseLength>0&&))
        {
            cout<<"Medium";
        }
    }    
    else if(passwordLength<6)
    {
            cout<<"Weak";
    }
}
    
    