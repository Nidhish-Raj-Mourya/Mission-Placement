#include <iostream>
using namespace std;

void countElements(int size) {
    int arr[size];
    
    for(int i=0;i<size;i++) {
        cout<<"Enter the value: ";
        cin>>arr[i];
    }
    int count = 1;   //  counting the first element
    int max = arr[0];    // first element is counted

    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            count++;
            max = arr[i];
        }
    }
    cout<<"count = "<<count;
}

int main() {
    int size;

    cout << "Enter the size: ";
    cin >> size;

    countElements(size);
    return 0;
}