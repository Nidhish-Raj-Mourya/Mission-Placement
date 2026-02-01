#include<iostream>
using namespace std;
int main(){
  int sellprice,costprice,profit,loss;
  cout<<"Enter sellprice ";
  cin>>sellprice;
  cout<<"the cost price ";
  cin>>costprice;
  profit = sellprice-costprice;
  loss = costprice-sellprice;
  if(sellprice>costprice)
  {
    cout<<"The profit is: "<<profit;
  }
  else
  {
    cout<<"The loss is : "<<loss;
  }

  
    return 0;
}