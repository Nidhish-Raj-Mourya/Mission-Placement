#include<iostream>
using namespace std;

int customTable(int number,int firstRange,int endRange){
    for(int i=firstRange;i<=endRange;i++){
        cout<<number<<" x "<<i<<" = "<<number*i<<endl;
    }
    return 0;
}

int main(){
    int number,firstRange,endRange;
    cout<<"Enter the number : ";
    cin>>number;
    cout<<"Enter the first range : ";
    cin>>firstRange;
    cout<<"Enter the end range : ";
    cin>>endRange;
    customTable(number,firstRange,endRange);

}