#include<iostream>
using namespace std;

int distinctArray(int number)
{
    int digitCount=0;
    int arrayOfLength[number];
    int k=0;
    int distinctElementArray[number];

    for(int i=0;i<number;i++)
    {
        distinctElementArray[i]=' ';
    }

    for(int i=0;i<number;i++)
    {
        cout<<"Enter value";
        cin>>arrayOfLength[i];
    }

    for(int i=0;i<number;i++)
    { 
        for(int j=i+1;j<number;j++)
        {
            if(i==0)
            {
                distinctElementArray[0]=arrayOfLength[0];
                k++;
            }
            if(arrayOfLength[i]==arrayOfLength[j])
            {
                int count=0;
                for(int t=0;t<number;t++)
                    {
                    if(distinctElementArray[t]==arrayOfLength[i])
                        {
                            count++;
                        }
                    }
                if(count!=0)
                    {
                        distinctElementArray[k]=arrayOfLength[i];
                        k++;
                    }
                break;
            }
            else if(arrayOfLength[i]!=arrayOfLength[j])
            {
                int count=0;
                for(int t=0;t<number;t++)
                    {
                    if(distinctElementArray[t]==arrayOfLength[j])
                        {
                            count++;
                        }
                    }

                if(count==0)
                    {
                        distinctElementArray[k]=arrayOfLength[j];
                        k++;
                    }
                break;
            } 
        }
    }

    int max=0;

    for(int i=0;i<number;i++)
    {
        if(distinctElementArray[i]!=' ')
        {
            int count=0;
            for(int j=0;j<number;j++)
            {
                if(distinctElementArray[i]==arrayOfLength[j])
                {
                    count++;
                }
            }
            if(max<count)
            {
                max=count;
            }
        cout<<distinctElementArray[i]<<" appeared "<<count<<"times\n";
        }
    }

    cout<<"Max : "<<max<<"times\n";
    
    for(int i=0;i<number;i++)
    {
        if(distinctElementArray[i]!=' ')
        {
            digitCount++;
            cout<<distinctElementArray[i]<<" ";
        }
    }

    cout<<"\nThe Unique Digits are "<<digitCount;
    
    return 0;
}

int main()
{
    int size,digit;

    cout<<"Enter the size ";
    cin>>size;

    distinctArray(size);

    return 0;

}