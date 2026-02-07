#include<iostream>
using namespace std;

int forwardCalculate(int x,int y){
      int forwardCount=1;

    for(int i=x;x<=100000;i++){

        while(i%y==0){
        
            return forwardCount;
        }
        
    forwardCount++;
    }

    return 0;
}

int backwardCalculate(int x,int y){
     int backwardCount=0;

    for(int i=x;x>=0;i--){

        while(i%y==0){
          
            return backwardCount;
        }
        
    backwardCount++;
    }

return 0;
}

void NearestNumber(int x ,int y){

    if(x>=1 && y<=100000){
    int forward=forwardCalculate(x,y);
    int backward=backwardCalculate(x,y);

    if(forward>=backward){
        x=x-backward;
        cout<<x;
    }
    else{
         x=x+forward;
        cout<<x;
    }
    }

    else{
        cout<<"Invalid constraints";
    }


} 


int main(){
    int x;
    int y;

    cout<<"Enter x:";
    cin>>x;
    cout<<"Enter y:";
    cin>>y;

    NearestNumber(x,y);

}