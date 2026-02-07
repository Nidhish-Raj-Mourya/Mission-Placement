#include<iostream>
using namespace std;

int sumofDigitisPrime(int number)
{
        int digit=0,sum=0,count=0;

        while(number!=0)
        {
            digit=digit%10;
            sum+=digit;
            number=number/10;
        }
        
        for(int j=2;j<sum;j++)
        {
            if(sum%j==0)
            {
                count++;
            }
        }
        
        if(count==0)
        {
            return true;
        }
        else
        {
            return false;
        }
}

int primeNumber(int number)
{       
        int count=0;
        
        for(int j=2;j<number;j++)
        {
            if(number%j==0)
            {
                count++;
            }
        }
        
        if(count==0)
        {
            if(sumofDigitisPrime(number))
            {
                cout<<number<<" ";
            }
        }
}
int iterateNumber(int number1,int number2)
{
    for(int i=number1;i<=number2;i++)
    {
        primeNumber(i);
    }
}
int main()
{
    int number1,number2;
        
    cout<<"Enter number1 ";
    cin>>number1;
        
    cout<<"enter number 2";
    cin>>number2;
        
    iterateNumber(number1,number2);

}
