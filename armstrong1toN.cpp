#include<iostream>
using namespace std;

int count(int number){
    int count=0;
    while(number!=0){
        number=number/10;
        count++;
    }
    return count;
}

int power(int digit,int powerr){
    int result=1;
    for(int i=0;i<powerr;i++){
        result=result*digit;
    }
    return result;
}

void checkArmstrong(int number){
    int temp;
    int countt=count(number);
    int temp2=number;
    int sum=0;

    while(number!=0){
     temp=number%10;
     sum=sum+power(temp,countt);
    number=number/10;
    }   

    if(temp2==sum){
    cout<<"Armstrong number:"<<sum<<endl;
    }
    
}


int main(){
    int number;
    cout<<"Enter number:";
    cin>>number;
   
    for(int i=1;i<=number;i++){
         checkArmstrong(i);
    }
}