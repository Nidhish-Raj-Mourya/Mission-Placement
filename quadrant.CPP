#include<iostream>
using namespace std;
int main(){
    int point1,point2;
    cout<<"point1: ";
    cin>>point1;
    cout<<"point2: ";
    cin>>point2;
    if(point1>=1&&point2>=1)
    {
        cout<<"The first quadiratel.";
    }
    else if(point1<=-1&&point2>=1){

    cout<<"The second quadiratel.";
}
else if(point1<=-1&&point2<=-1){
    cout<<"The third quadiratel";
}
else if(point1>=1&&point2<=-1){
    cout<<"the fourth quadiratel";
}
else{
    cout<<"It is on axis";
}
return 0;
}