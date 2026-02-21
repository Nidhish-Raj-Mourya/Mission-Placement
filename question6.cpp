#include<iostream>
using namespace std;
int array1(int num,int date,int fine){

    int arr[num];
    int count =0,evencount=0;
    if(0<num&&num<=100){
    for(int i=0;i<num;i++){
       cin>> arr[i];
    }
}
    for(int i=0;i<num;i++){
        if(1<=date&&date<=30){
        if(date%2==0){
        if(arr[i]%2!=0){
            count++;
        }
    }
    else{
        if(arr[i]%2==0){
        evencount++;
        }
        }
    }
    }
    if(100<=fine&&fine<=500)
    if(count!=0){
    int cost = fine * count;
    cout<<"The total fine for odd vehicles is: "<<cost;
    }
    else{
    int cost = fine * evencount;
    cout<<"The total fine for odd vehicles is: "<<cost;
    }
    
      
    return 0;
}
int main(){
    int size,date,fine;

    cout<<"Enter the number of vehicles: ";
    cin>>size;

    cout<<"Enter the date: ";
    cin>>date;

    cout<<"Enter the fine: ";
    cin>>fine;


    array1(size,date,fine);


    return 0;
}