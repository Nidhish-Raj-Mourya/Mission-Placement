#include<iostream>
using namespace std;
int main(){
    int consume_water , discount,total_bill;
    cin >> consume_water;
    if(consume_water >= 0 && consume_water <= 5000){
      total_bill = 2 * consume_water;
      if(consume_water<= 3000)
    {

        discount=15;

        total_bill-=(discount*total_bill)/100;
    }
      cout<<"Total bill "<<total_bill<<endl;
    }
    else if(consume_water >= 5001&& consume_water <= 10000){
        total_bill = 3 * consume_water;
        cout<<"Total bill "<<total_bill<<endl;
    }
    return 0;

}