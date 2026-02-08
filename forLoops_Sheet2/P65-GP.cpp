#include<iostream>
using namespace std;

int ratioFunc(int ratio,int count)
{
    int result=1;

    while(count>0)
    {
        result*=ratio;
        count--;
    }

    return result;
}

int GP(int first,int ratio,int n)
{
    int firstValue=first;
    int i=2;
    int ratioValue=1;
    int count=0;

    cout<<first<<" ";

    while(i<=n)
    {
        count++;

        ratioValue=ratioFunc(ratio,count);
        cout<<firstValue*ratioValue<<" ";

        i++;
    }
}

int main()
{
    int firstTerm,ratio,nTerms;

    cout<<"Enter the first Term";
    cin>>firstTerm;

    cout<<"Enter the ratio";
    cin>>ratio;

    cout<<"Enter the nth term";
    cin>>nTerms;

    GP(firstTerm,ratio,nTerms);

    return 0;
}