#include<iostream>
using namespace std;
int main(){
    int seconds, hours, minutes, seconds_formatted;
    cin >> seconds;
    hours = seconds / 3600;
    cout << "Hours:" << hours << endl;
    minutes = (seconds % 3600) / 60;
    cout << "Minutes:" << minutes << endl;
    seconds_formatted = (seconds % 3600) % 60;
    cout << "Seconds:" << seconds_formatted << endl;
    return 0;
}