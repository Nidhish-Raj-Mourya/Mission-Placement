#include<iostream>
using namespace std;
int main(){
    int dayOfWeek;
    cout<<"Enter day of week";
    cin>>dayOfWeek;
    if(dayOfWeek==1){
        cout<<"Monday";
    }
    else if(dayOfWeek==2){
        cout<<"Tuesday";
    }
    else if(dayOfWeek==3){
        cout<<"Wednesday";
    }
    else if(dayOfWeek==4){
        cout<<"Thursday";
    }
    else if(dayOfWeek==5){
        cout<<"Friday";
    }
    else if(dayOfWeek==6){
        cout<<"Saturday";
    }
    else if(dayOfWeek==7){
        cout<<"Sunday";
    }
    else{
        cout<<"invalid";
    }

    return 0;
}