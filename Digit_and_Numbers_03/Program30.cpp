#include<iostream>
using namespace std;
int descending(int number){

//value extraction
int temp=0;
int firstDigit=number/1000;
number=number%1000;
int secondDigit=number/100;
number=number%100;
int thirdDigit=number/10;
int fourthDigit=number%10;

//descending order
if(firstDigit<secondDigit){
 temp=firstDigit;
 firstDigit=secondDigit;
 secondDigit=temp;
}
if(firstDigit<thirdDigit){
 temp=firstDigit;
 firstDigit=thirdDigit;
 thirdDigit=temp;
}
if(firstDigit<fourthDigit){
 temp=firstDigit;
 firstDigit=fourthDigit;
 fourthDigit=temp;
}
if(secondDigit<thirdDigit){
 temp=secondDigit;
 secondDigit=thirdDigit;
 thirdDigit=temp;
}
if(secondDigit<fourthDigit){
 temp=secondDigit;
 secondDigit=fourthDigit;
 fourthDigit=temp;
}
if(thirdDigit<fourthDigit){
 temp=thirdDigit;
 thirdDigit=fourthDigit;
 fourthDigit=temp;
}
int newNumber=firstDigit*1000+secondDigit*100+thirdDigit*10+fourthDigit;
return newNumber;
}

int ascending(int number){
//value extraction
int temp=0;
int firstDigit=number/1000;
number=number%1000;
int secondDigit=number/100;
number=number%100;
int thirdDigit=number/10;
int fourthDigit=number%10;

//ascending order
if(firstDigit>secondDigit){
 temp=firstDigit;
 firstDigit=secondDigit;
 secondDigit=temp;
}
if(firstDigit>thirdDigit){
 temp=firstDigit;
 firstDigit=thirdDigit;
 thirdDigit=temp;
}
if(firstDigit>fourthDigit){
 temp=firstDigit;
 firstDigit=fourthDigit;
 fourthDigit=temp;
}
if(secondDigit>thirdDigit){
 temp=secondDigit;
 secondDigit=thirdDigit;
 thirdDigit=temp;
}
if(secondDigit>fourthDigit){
 temp=secondDigit;
 secondDigit=fourthDigit;
 fourthDigit=temp;
}
if(thirdDigit>fourthDigit){
 temp=thirdDigit;
 thirdDigit=fourthDigit;
 fourthDigit=temp;
}
int newNumber=firstDigit*1000+secondDigit*100+thirdDigit*10+fourthDigit;
return newNumber;
}

int karperRoutine(int number){
int smallest=ascending(number);
int greatest=descending(number);
cout<<"Greatest possible is"<<greatest<<"\n";
cout<<"Smallest possible is "<<smallest<<"\n";
cout<<"Their Subtraction is "<<(greatest-smallest);
}
int main(){
 int number;
 cout<<"enter the number ";
 cin>>number;
 karperRoutine(number);
}