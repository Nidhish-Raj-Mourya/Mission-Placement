#include<iostream>
using namespace std;

int NumberPositiveNegative(int num)
{

    
    int a[num];

    for(int i=0;i<num;i++)
    {
        cout<<"Enter Value ";
        cin>>a[i];
    }

    for(int i=0;i<num;i++)
    {
        if(i%2==0)
        {
            for(int j=i;j<num;j++)
            {
                if(a[j]>0)
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    break;
                }
            }
        }
        else
        {
            for(int j=i;j<num;j++)
            {
                if(a[j]<0)
                {
                    int temp=a[i];
                    a[i]=a[j];
                    a[j]=temp;
                    break;
                }
            }
        }
    }

    for(int i=0;i<num;i++)
    {
        cout<<a[i]<<" ";
    }
    

}

int main()
{
    int num;
    cout<<"Enter the Size ";
    cin>>num;

    NumberPositiveNegative(num);


}