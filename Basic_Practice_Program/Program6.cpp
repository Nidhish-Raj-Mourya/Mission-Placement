#include<iostream>
using namespace std;
int main()
{ int marks1,marks2,marks3,sum;
    float percent;
    cout<<"Enter marks for subject 1 \n";
    cin>>marks1;
    cout<<"Enter marks for subject 2 \n";
    cin>>marks2;
    cout<<"Enter marks for subject 3 \n";
    cin>>marks3;
    sum=marks1+marks2+marks3;
    cout<<"The sum is "<<sum<<"\n";
    percent=(sum/300.0)*100;
    cout<<"The percentage is "<<percent;
    return 0;
}
