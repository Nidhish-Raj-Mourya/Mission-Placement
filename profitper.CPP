#include<iostream>
using namespace std;
int main(){
  int sellprice,costprice,profit,profitpercentage;
  cout<<"Enter sellprice ";
  cin>>sellprice;
  cout<<"the cost price ";
  cin>>costprice;
  profit = sellprice-costprice;
  cout<<"The profit is: "<<profit<<endl;
  profitpercentage = (profit/costprice)*100;
  cout<<"The profit percentage: "<<profitpercentage;
  return 0;

}