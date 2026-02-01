#include<iostream>
using namespace std;
int main(){
    int mark1, mark2, mark3,mark4,mark5;
    cin >> mark1 >> mark2 >> mark3 >> mark4 >> mark5;
    float average;
    average = (mark1 + mark2 + mark3 + mark4 + mark5) / 5.0;
    cout << "Average Marks:" << average << endl;
    return 0;
}