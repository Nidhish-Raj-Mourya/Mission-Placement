#include<iostream>
using namespace std;

int evenOddArray(int number)
{
    int evenCount=0,oddCount=0;
    int arrayOfLength[number];

    for(int i=0;i<number;i++)
    {
        cout<<"Enter value";
        cin>>arrayOfLength[i];
        if(arrayOfLength[i]%2==0)
        {
            evenCount++;
        }
        else
        {
            oddCount++;
        }
    }

    cout<<"No. of even digits are "<<evenCount<<"\n";
    cout<<"No. of odd digits are "<<oddCount;


}

int main()
{
    int size;

    cout<<"Enter the size ";
    cin>>size;

    evenOddArray(size);

    return 0;

}