#include<iostream>
using namespace std;
int arithmetic(int num,int diff,int last){
    int a = num;
    for(int i=1;i<=last;i++){
        cout<<a<<" ";
        a = a+diff;
        
    }

        return 0;
}
int main(){
    
    int number,difference,range;

    cout<<"The first term is ";
    cin>>number;

    cout<<"The difference is ";
    cin>>difference;

    cout<<"The last term is ";
    cin>>range;


    arithmetic(number,difference,range);
    return 0;
}