#include<iostream>
using namespace std;
int main(){
    int number,year;
    cout<<"The number is: ";
    cin>>number;
    cout<<"year: ";
    cin>>year;
    if(number==1){
        cout<<"January";
        cout<<"number of days is 31";
    }
    else if(number==2){
        if(year/4==0&&year%100!=0||year/400==0){
            cout<<"the number of days is 28.";
        }
        else{
            cout<<"the number of days is 29";
        }
    }
    else if(number==3){
        cout<<"March";
        cout<<"number of days is 31";
    }
    else if(number==3){
        cout<<"April";
        cout<<"number of days is 30";
    }
    else if(number==5){
        cout<<"May";
        cout<<"number of days is 31";
    }
    else if(number==6){
        cout<<"June";
        cout<<"number of days is 30";
    }
    else if(number==7){
        cout<<"July";
        cout<<"number of days is 31";
    }
    else if(number==8){
        cout<<"August";
        cout<<"number of days is 31";
    }
    else if(number==9){
        cout<<"Spetember";
        cout<<"number of days is 30";
    }
    else if(number==10){
        cout<<"october";
        cout<<"number of days is 31";
    }
    else if(number==11){
        cout<<"Number";
        cout<<"number of days is 30";
    }
    else{
        cout<<"december";
        cout<<"number of days is 31";
    }


return 0;
}