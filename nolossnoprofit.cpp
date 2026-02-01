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
  else if(sellprice<costprice){
   cout<<"The loss is : "<<loss;
  }
  else
  {
    cout<<"There is no loss no profit";
  }
  
    return 0;
}