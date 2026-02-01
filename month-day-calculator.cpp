#include<iostream>
using namespace std;
int main(){
    int month,year;
    cout<<"Enter the month : ";
    cin>>month;
    cout<<"Enter the year : ";
    cin>>year;
    if(month==1){
        cout<<"31 days ";
        cout<<"January ";
    }
    else if(month==2){
        if(year%4==0 and year%100!=0 or year%400==0){
            cout<<"29 Days ";
            cout<<"Febuary ";

        }
        else{
            cout<<"29 Days ";
            cout<<"Febuary ";
        }
    }
    else if(month==3){
        cout<<"31 days ";
        cout<<"March ";
    }
    else if(month==4){
        cout<<"30 days ";
        cout<<"April ";
    }  
    else if(month==5){
        cout<<"31 days ";
        cout<<"May ";
    }   
    else if(month==6){
        cout<<"30 days ";
        cout<<"June ";
    } 
    else if(month==7){
        cout<<"31 days ";
        cout<<"July ";
    } 
    else if(month==8){
        cout<<"31 days ";
        cout<<"August ";
    } 
    else if(month==9){
        cout<<"30 days ";
        cout<<"September ";
    } 
    else if(month==3){
        cout<<"31 days ";
        cout<<"October ";
    } 
    else if(month==3){
        cout<<"30 days ";
        cout<<"November ";
    }
    else{
        cout<<"31 days ";
        cout<<"December ";
    }
}
