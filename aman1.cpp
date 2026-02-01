#include<iostream>
using namespace std;
int identify(int number){
if(number==0){
    cout<<"this number is zero";
}
else if(number<0){
    cout<<"this is negative ";
}
else{
    cout<<"this is positive";
} 

}
int main(){
    int number;
    cout<<"enter number:";
    cin>>number;
    
    cout<<identify(number);
    return 0;
}