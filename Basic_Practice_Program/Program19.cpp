#include<iostream>
using namespace std;
int main()
{ int marks1,marks2,marks3,marks4,marks5,sum;
    float average;
    cout<<"Enter marks for subject 1 \n";
    cin>>marks1;
    cout<<"Enter marks for subject 2 \n";
    cin>>marks2;
    cout<<"Enter marks for subject 3 \n";
    cin>>marks3;
    cout<<"Enter marks for subject 4 \n";
    cin>>marks4;
    cout<<"Enter marks for subject 5 \n";
    cin>>marks5;
    sum=marks1+marks2+marks3+marks4+marks5;
    cout<<"The sum is "<<sum<<"\n";
    average=sum/5;
    cout<<"The average is "<<average;
    return 0;
}
