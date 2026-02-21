#include <iostream>
using namespace std;

void sumDigit(int n)
{
    int sum = 0;
    while (n>0)
    {
        sum = sum+(n%10);  // take the last digit
        n = n/10;  // removing the last digit
    }
sum = sum+i;
}

int main()
{
 int N,R;
 cin>>N>>R;

 int result = N;
    for (int i=0; i<R; i++)
    {
   result = sumDigit(result);
   while(result>=10)
{
 result = sumDigit(result);
 }
 }
  cout<<result;
 return 0;
}