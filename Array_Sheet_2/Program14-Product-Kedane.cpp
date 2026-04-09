#include<iostream>
using namespace std;

int productKadene(int number,int k,int sumToBeCompared)
{

    int maxProduct=1;
    int a[number];

    for(int i=0;i<number;i++)
    {
        cin>>a[i];
    }

    for(int i=0;i<(number);i++)
    {
        int product=1;
        for(int j=i;j<(number);j++)
        {
            
            product*=a[j];
            if(maxProduct<product)
                {
                    maxProduct=product;
                }
            
        }
    }
    cout<<"The Max Porduct is "<<maxProduct;

   
}

int main()
{
    int size,K,sum;

    cout<<"Enter the Size ";
    cin>>size;

    cout<<"Enter the sum ";
    cin>>sum;

    productKadene(size,K,sum);
}