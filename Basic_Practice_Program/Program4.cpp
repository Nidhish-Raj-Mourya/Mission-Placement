#include<iostream>
using namespace std;
int main()
{ int marks1,marks2,marks3,sum;
    float average;
    cout<<"Enter marks for subject 1 \n";
    cin>>marks1;
    cout<<"Enter marks for subject 2 \n";
    cin>>marks2;
    cout<<"Enter marks for subject 3 \n";
    cin>>marks3;
    sum=marks1+marks2+marks3;
    cout<<"The sum is "<<sum<<"\n";
    average=sum/3.0;
    cout<<"The average is "<<average;
    return 0;
}
