#include<iostream>
using namespace std;

int printRectangle(int row,int column)
{
    for(int i=0;i<row;i++)
    {
        if(i==0||i==row-1)
        {
            for(int j=0;j<column;j++)
            {
                cout<<"*";
            }
        }
        else
        {
            for(int j=0;j<column;j++)
            {
                if(j==0||j==(column-1))
                {
                    cout<<"*";
                }
                else
                {
                    cout<<" ";
                }
            }
        }
        cout<<"\n";
    }
}

int main()
{
    int row,column;

    cout<<"Enter the row ";
    cin>>row;

    cout<<"Enter the column ";
    cin>>column;
    
    printRectangle(row,column);
}