#include<iostream>
using namespace std;
int main(){
    int chem = 0, phy = 0, math = 0;
    cout << "Enter marks of Chemistry:" ;
    cin >> chem;
    cout << "Enter marks of Physics:";
    cin >> phy;
    cout << "Enter marks of Mathematics:";
    cin >> math;
    int total = chem + phy + math;
    cout << "Total Marks:" << total << endl;
    float percentage = (total /300.0)*100;
    cout <<"Percentage:" << percentage << "%" << endl;
    return 0;
}