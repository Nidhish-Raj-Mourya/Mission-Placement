#include<iostream>
using namespace std;
int strong(int num){
   int number = num;
   int i,digit;
  
   int check = 0;

   while(num!=0){
    digit = num%10;
     int fact = 1;
    for(int i=1;i<=digit;i++){
     fact = i*fact;
     
    }
    check = check +fact;
    num = num/10;
   }
   if(check==number){
    cout<<check<<endl;
   }
   return 0;
}
   
    int range(int number){
    for(int i =1;i<=number;i++){
        strong(i);
    }

 return 0;
}
int main(){
    int number;

    cout<<"Enter the number: ";
    cin>>number; 

    range(number);

    return 0;
}