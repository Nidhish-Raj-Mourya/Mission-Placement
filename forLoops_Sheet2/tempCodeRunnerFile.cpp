#include<iostream>
using namespace std;

int patternTillN(int number)
{
    for(int i=number;i>0;i--)
        {
            for(int j=(i-1);j>0;j--)
            {
                cout<<" ";
            }