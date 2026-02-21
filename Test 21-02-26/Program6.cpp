#include<iostream>
using namespace std;
int EvenValueFunc(int fineArray[],int fine,int totalVehicles )
{

    int count=0;
    for(int i=0;i<totalVehicles;i++)
    {
        if(fineArray[i]%2 !=0)
        {
            count++;
        }
    }
    cout<<count*fine;
}

int OddValueFunc(int fineArray[],int fine,int totalVehicles )
{
    int count=0;
    for(int i=0;i<totalVehicles;i++)
    {
        if(fineArray[i]%2 ==0)
        {
            count++;
        }
    }
    cout<<count*fine;
}

int FineCalculation(int fineArray[],int date,int fine, int totalVehicles)
{

    if(date%2==0)
    {
        EvenValueFunc(fineArray,fine,totalVehicles);
    }
    else
    {
        OddValueFunc(fineArray,fine,totalVehicles);
    }
}

int main(){
    int totalVehicles,date,fine;

    cout<<"No of vehicles ";
    cin>>totalVehicles;

    if(totalVehicles<0 || totalVehicles>=20)
    {
        cout<<"Invalid Input";
        return 0;
    }
    
    int fineArray[totalVehicles];

    for(int i=0;i<totalVehicles;i++)
    {
        cout<<"Enter the fine ";
        cin>>fineArray[i];
    }

    for(int i=0;i<totalVehicles;i++)
    {
    if(fineArray[i]<0 || fineArray[i]>9)
        {
            cout<<"Invalid Input";
            return 0;
        }
    }

    cout<<"Enter Date ";
    cin>>date;

    if(date<=0 || date>30)
    {
        cout<<"Invalid Input";
        return 0;
    }

    cout<<"Fine ";
    cin>>fine;

    if(fine<100 || fine>5000)
    {
        cout<<"Invalid Input";
        return 0;
    }
    
    FineCalculation(fineArray,date,fine,totalVehicles);
}