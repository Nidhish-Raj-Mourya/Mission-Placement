#include<iostream>
using namespace std;

int Profit(int num)
{

    int MaxProfit=0;
    int a[num];

    for(int i=0;i<num;i++)
    {
        cout<<"Enter Value ";
        cin>>a[i];
    }

    for(int i=0;i<num;i++)
    {
        int Profit=0;
        for(int j=0;j<num;j++)
        {
            
            Profit=a[j]-a[i];
            
            if(MaxProfit<=Profit)
            {
                MaxProfit=Profit;
            }
        }
        
    }

    cout<<"Max Profit is "<<MaxProfit;

}

int main()
{
    int num;
    cout<<"Enter the Size ";
    cin>>num;

    Profit(num);


}