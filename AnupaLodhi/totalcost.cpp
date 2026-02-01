#include<iostream>
using namespace std;
int main(){
    int price, quantity, tax_percenatge, subtotal_cost_of_items, tax_amount, final_cost;
    cin >> price >> quantity >> tax_percenatge >> subtotal_cost_of_items >> tax_amount >> final_cost;
    float total_cost_of_item;
    total_cost_of_item = (price * quantity) + ((price * quantity) * tax_percenatge) / 100.0;
    cout << "Total Cost Of Item:" << total_cost_of_item << endl;
    subtotal_cost_of_items = price * quantity;
    cout << "Subtotal Cost Of Items:" << subtotal_cost_of_items << endl;
    tax_amount = (subtotal_cost_of_items * tax_percenatge) / 100.0;
    cout << "Tax Amount:" << tax_amount << endl;
    final_cost = subtotal_cost_of_items + tax_amount;
    cout << "Final Cost:" << final_cost << endl;
    return 0;
}