#include<iostream>
using namespace std;

int maxDifference(int n)
{
    int maxDifference=0;
    int a[n];

    for(int i=0;i<n;i++)
    {
        cout<<"ENter the element ";
        cin>>a[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            int difference=a[j]-a[i];
            if(maxDifference<difference)
            {
                maxDifference=difference;
            }
        }
    }

    cout<<"the Max Difference is "<<maxDifference;

}
int main()
{
    int size;

    cout<<"Enter the Size ";
    cin>>size;

    maxDifference(size);
}