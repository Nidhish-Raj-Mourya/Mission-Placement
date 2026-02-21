#include<iostream>
using namespace std;

int sundayCalculate(string day,int number){
    int n;
    int sunday=0;

    if(number<1 || number>365){
        return 0;
    }

    if(day=="mon"){
         n=7-1;
    }
    else  if(day=="tue"){
        n=7-2;
    }
     else  if(day=="wed"){
        n=7-3;
    }
     else  if(day=="thu"){
        n=7-4;
    }
     else  if(day=="fri"){
        n=7-5;
    }
     else  if(day=="sat"){
        n=7-6;
    }
     else  if(day=="sun"){
        n=7-7;
    }
 
    if(number!=0){
        number=number-n;
        sunday++;
    }
    while(number>=7){
        number=number/7;
        sunday++;
    }
    cout<<"total sunday is:"<<sunday;


    return 0;
}

int main(){
    string day;
    int number;

    cout<<"Enter day(mon/tue/wed/thu/fri/sat/sun):";
    cin>>day;
    cout<<"Enter number:";
    cin>>number;

    sundayCalculate(day,number);
}