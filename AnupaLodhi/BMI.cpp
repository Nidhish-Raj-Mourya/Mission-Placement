#include<iostream>
using namespace std;
int main(){
    int weightkg, heightm*m;
    cin >> weightkg >> heightm*m;
    float bmi;
    bmi = weightkg/(heightm*m * heightm*m);
    cout << "BMI:" << bmi << endl;
    return 0;   
}