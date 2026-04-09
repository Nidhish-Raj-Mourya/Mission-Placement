#include<iostream>
using namespace std;

int binarySearchSquareRoot(int number)
{
    int low=1,high=number;

    int result=0;
    while(low<=high)
    {
        int mid=(low+high)/2;

        if(mid*mid==number)
        {
            result=mid;
            return result;
        }

        else if(mid*mid<number)
        {
           
            low=mid+1;
        }

        else{ 
             
             high=mid-1;
        }
    }

    return result;
}
int main()
{
    int element;
    cout<<"Enter the number";
    cin>>element;
   
    int result=binarySearchSquareRoot(element);
    if(result==0)
    {
        cout<<"No Sqaure ";
    }
    else
    {
        cout<<result;
    }
}