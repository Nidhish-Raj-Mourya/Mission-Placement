#include<iostream>
using namespace std;

int AP(int first,int difference,int n)
{

    int sum=0;
    int i=1;

    while(i<=n)
    {
    cout<<first<<" ";
    sum+=first;
    first+=difference;
    i++;
    }

    cout<<"The sum is "<<sum;

    return 0;
}

int main()
{
    int firstTerm,commonDifference,nterms;

    cout<<"Enter first Term ";
    cin>>firstTerm;

    cout<<"Enter Common Difference ";
    cin>>commonDifference;

    cout<<"Enter N Termth ";
    cin>>nterms;

    AP(firstTerm,commonDifference,nterms);
    
    return 0;
}