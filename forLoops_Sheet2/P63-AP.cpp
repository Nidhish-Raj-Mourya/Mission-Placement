#include<iostream>
using namespace std;

int AP(int first,int difference,int n)
{
    int i=1;

    while(i<=n)
    {
    cout<<first<<" ";
    first+=difference;
    i++;
    }

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