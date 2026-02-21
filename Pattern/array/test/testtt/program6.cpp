#include<iostream>
using namespace std;

int finecalculate(int number,int date,int x){
  int arr[number];
  int count=1;
  int fine;

    if(number<1 || number>100 || date<1 || date>30 || x<100 || x>5000){
        cout<<"invalid input";
        return 0;
    }

    for(int i=0;i<number;i++){
        cout<<"Enter last digit of registration number: "<<i+1<<" : ";
        cin>>arr[i];
    }

    if(date%2==0){
        for(int i=0;i<number;i++){
            if(arr[i]%2!=0){
                fine=x*count;
                count++;
            }
        }
    }
    else{
        for(int i=0;i<number;i++){
            if(arr[i]%2==0){
                fine=x*count;
                count++;
            }
        }
    }
    cout<<"total fine is:"<<fine;
 
    return 0;
}

int main(){
    int number;
    int date;
    int x;

    cout<<"Enter vechile number:";
    cin>>number;
    cout<<"Enter date:";
    cin>>date;
    cout<<"Enter fine amount:";
    cin>>x;


    finecalculate(number,date,x);
}