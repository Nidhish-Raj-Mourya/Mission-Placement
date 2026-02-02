#include<iostream>
using namespace std;
int count(int number){
    int count=0;
while(number!=0){
number=number/10;
count++;
}
return count-1;
}

int first(int number){
    int limit=count(number);
    for(int  i=1;i<=limit;i++){
        number=number/10;
    }
    return number;
}

int last(int number){
    if(number==0){
        return 0;
    }
    else{
        number=number%10;
        return number;
    }

}
void sum(int number){
    int addition=first(number)+last(number);
    cout<<addition;
    
}
int main(){
    int number;
    cout<<"Enter number:";
    cin>>number;
    sum(number);
}