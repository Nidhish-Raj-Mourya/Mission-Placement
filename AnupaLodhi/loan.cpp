#include<iostream>
using namespace std;
int main(){
    int age , income , credit_score;
    cin>>age>>income>>credit_score ;
    cout<<" Age: "<<" Income: "<<" Credit score: ";
    if(age >= 20 && age >=60 && income >= 25000 && credit_score >= 700)
    {cout<<"Eligible";}
    else if(age < 21)
    {cout << "Failed age";}
    else if (income < 25000)
   {cout << "Failed salary";}
   else

   {cout << "Failed credit score";}
    
    return 0;
    
}