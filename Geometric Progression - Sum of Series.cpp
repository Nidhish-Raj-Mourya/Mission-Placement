#include<iostream>
using namespace std;
 int power(int number,int count){
  int result = 1;
  for(int i = 1;i<=count;i++){
    result  = result*number;
  }
  return result;
}
int arithmetic(int num,int diff,int last){
    int count =0,sum=0;
    int a = num;
    for(int i=1;i<=last;i++){   
        sum +=a;
        count++;
        a = num;
        a*=power(diff,count);
    }
    cout<<"The sum of the series is "<<sum;

        return 0;
}
int main(){
    
    int number,ratio,range;

    cout<<"The first term is ";
    cin>>number;

    cout<<"The ratio is ";
    cin>>ratio;

    cout<<"The last term is ";
    cin>>range;


    arithmetic(number,ratio,range);
    return 0;
}