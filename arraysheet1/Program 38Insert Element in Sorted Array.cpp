 #include<iostream>
using namespace std;
int array1(int size,int element){
    int arr[size];
    
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int position =size;
    for(int i =0;i<size;i++){
        if(arr[i]>element){
             position=i;    
             break;
    }
    }
     for (int i = size;i>position;i--) {
        arr[i] = arr[i-1];
     }
    arr[position] = element;
    
    for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";
    }
   
return 0;
}
int main(){
    int size,element;

    cout<<"Enter the size ";
    cin>>size;

    cout<<"Enter the element ";
    cin>>element;

    array1(size,element);

    return 0;

}