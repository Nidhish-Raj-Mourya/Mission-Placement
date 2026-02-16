#include<iostream>
using namespace std;

void findNumber(int A, int B, int C)
{
    int max = A; // assume thaat A should me largest
    
    if(B > max)
    {
        max = B;
    } else { (C > max)
    {
        max = C;
    }

    cout<<"Maximum number is " << max;
}
}
int main(){

    int A , B , C;

    cout<<"Enter the Maximum Number:";
    cin>>A>>B>>C;

    findNumber(A , B , C);

    return 0;


}

