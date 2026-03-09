#include<iostream>
using namespace std;
int merge_array(int size1,int size2){
    int arr1[size1];
    int arr2[size2];
    int size3 = size1+size2;
    int arr3[size3];
    cout<<"Element of array first: "<<endl;
    for(int i =0;i<size1;i++){
        cin>>arr1[i];
    }
     cout<<"Elements of second array: "<< endl;
    for(int i=0;i<size2;i++){
        cin>>arr2[i];
    }
    for(int i=0;i<size1;i++){
    arr3[i]=arr1[i];
    }
    for(int i=0;i<size2;i++){
    arr3[size1+i]=arr2[i];
    }

    cout << "Merged array: " << endl;
    for (int j=0;j<size3;j++) {
        cout<<arr3[j]<< " ";
    }

    return 0;

}
int main(){
    int size1,size2;

    cout<<"Enter the size first array ";
    cin>>size1;

    cout<<"Enter the size of second array ";
    cin>>size2;

    merge_array(size1,size2);

    return 0;

}