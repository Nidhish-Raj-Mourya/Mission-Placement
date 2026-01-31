#include<iostream>
using namespace std;

int power(int number,int count){
    int result=1;
    for(int i=1;i<=count;i++){
        result=result*number;
    }
    return result;
}

void loop(int n){
    int count=0;
    int n2;
    int temp=n;
    int sum=0;
    int temp2=n;
    
    for(int i=0;i<n;n=n/10){
         n2=n%10;
         count++;
    }

    for(int i=0;i<count;i++){
      for(int j=0;j<temp;temp=temp/10){
        n2=temp%10;
        sum=sum+power(n2,count);
    }
}
  if(sum==temp2){
        cout<<"ARMSTRONG";
    }
    else{
        cout<<"not armstromng";
    }

}

int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;
    
    loop(n);
}