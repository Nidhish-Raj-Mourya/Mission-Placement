#include<iostream>
using namespace std;

int sizeSum(int number,int sumElement)
{

    int a[number];

    for(int i=0;i<number;i++)
    {
        cout<<"Entrr the element ";
        cin>>a[i];
    }

    for(int i=0;i<number;i++)
    {
        for(int j=0;j<number;j++)
        {
            if(a[i]-a[j]==sumElement)
            {
                cout<<a[i]<<" "<<a[j]<<"\n";

            }
            if(a[j]-a[i]==sumElement)
            {
                cout<<a[i]<<" "<<a[j]<<"\n";
            }
        }
    }

}

int main(){
    int size,sum;
    
    cout<<"Enter the Size ";
    cin>>size;

    cout<<"Enter the Sum element ";
    cin>>sum;

    sizeSum(size,sum);
}