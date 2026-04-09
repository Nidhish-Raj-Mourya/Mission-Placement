#include<iostream>
using namespace std;

int windowNegative(int number,int k)
{

    int a[number];

    for(int i=0;i<number;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<(number-k)+1;i++)
    {
        for(int j=i;j<(i+k);j++)
        {
            if(a[j]<0)
            {
                cout<<i<<" "<<(j-i)<<"\n";
                break;
            }
        }
    }

}

int main()
{
    int size,K;

    cout<<"Enter the Size ";
    cin>>size;

    cout<<"Enter the window ";
    cin>>K;

    windowNegative(size,K);
}