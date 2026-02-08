#include<iostream>
using namespace std;

int rightTriangleSameN(int number)
{   
    int value=1;
    for(int i=1;i<number;i++)
    {
        for(int j=1;j<=i;j++)
        {
            cout<<value<<" ";
        }
        value++;

        cout<<"\n";
    }
}

int main()
{
    int number;

    cout<<"Enter the n th term ";
    cin>>number;

    rightTriangleSameN(number);

    return 0;
}