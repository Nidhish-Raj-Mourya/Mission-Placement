#include<iostream>
using namespace std;

int PriorGreaterElements(int number)
{

    if(number<=0 || number>=20)
    {
        cout<<"Invalid Input";
        return 0;
    }

    int digitCount=0;
    int arr[number];

    for(int i=0;i<number;i++)
    {
        cout<<"Enter the element ";
        cin>>arr[i];
    }
    for(int i=0;i<number;i++)
    {
    if(arr[i]<1 || arr[i]>10000)
        {
            cout<<"Invalid Input";
            return 0;
        }
    }

    for(int i=0;i<number;i++)
    {
        if(i==0)
        {
            cout<<arr[i]<<" ";
            digitCount++;
        }

        if(i!=0)
        {
            int count=0;
            for(int j=0;j<i;j++)
            {
                if(arr[i]<arr[j])
                {
                    count=1;
                }
            
            }
        if(count==0)
            {
                cout<<arr[i]<<" ";
                digitCount++;
            }
        }
    }
    cout<<"\nThe Total Digits greater than prior Elements are "<<digitCount;
}

int main(){
    int size;
    
    cout<<"Enter the Size ";
    cin>>size;

    PriorGreaterElements(size);

}